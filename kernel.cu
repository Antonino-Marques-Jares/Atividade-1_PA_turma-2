#include <cassert>                    // Biblioteca para realizar asserções
#include <cuda_runtime.h>             // Biblioteca CUDA para operações de tempo de execução
#include <device_launch_parameters.h> // Parâmetros de lançamento de dispositivo CUDA
#include "useGPU.h"                   // Inclui a definição da classe useGPU

using namespace std; // Espaço de nomes padrão do C++ (std)

// Função genérica para processar uma imagem no dispositivo GPU com uma função de kernel
template <typename Function>
void ProcessImageGpu(unsigned char *imageRGBA, int width, int height, Function kernelFunction)
{
    // Aloca memória no dispositivo para a imagem RGBA
    unsigned char *ptrImageDataGpu = nullptr;
    assert(cudaMalloc(&ptrImageDataGpu, width * height * 4) == cudaSuccess);                                   // Aloca memória
    assert(cudaMemcpy(ptrImageDataGpu, imageRGBA, width * height * 4, cudaMemcpyHostToDevice) == cudaSuccess); // Copia dados para o dispositivo

    // Define o tamanho do bloco e da grade para paralelismo
    dim3 blockSize(16, 16);
    dim3 gridSize((width + blockSize.x - 1) / blockSize.x, (height + blockSize.y - 1) / blockSize.y);

    // Chama a função de kernel no dispositivo
    kernelFunction<<<gridSize, blockSize>>>(ptrImageDataGpu);

    // Verifica se ocorreu algum erro no lançamento do kernel
    auto err = cudaGetLastError();

    // Copia os dados de volta do dispositivo para a CPU
    assert(cudaMemcpy(imageRGBA, ptrImageDataGpu, width * height * 4, cudaMemcpyDeviceToHost) == cudaSuccess);

    // Libera a memória alocada no dispositivo
    cudaFree(ptrImageDataGpu);
}

// Função de kernel para converter uma imagem colorida em escala de cinza
__global__ void ImageToGray(unsigned char *imageRGBA)
{
    int x = blockIdx.x * blockDim.x + threadIdx.x;
    int y = blockIdx.y * blockDim.y + threadIdx.y;
    int idx = y * gridDim.x * blockDim.x + x;

    unsigned char *pixel = &imageRGBA[idx * 4];
    unsigned char grayValue = static_cast<unsigned char>(0.2989 * pixel[0] + 0.5870 * pixel[1] + 0.1140 * pixel[2]);
    pixel[0] = grayValue;
    pixel[1] = grayValue;
    pixel[2] = grayValue;
}

// Função de kernel para realçar a cor vermelha na imagem
__global__ void ImageToRed(unsigned char *imageRGBA)
{
    int x = blockIdx.x * blockDim.x + threadIdx.x;
    int y = blockIdx.y * blockDim.y + threadIdx.y;
    int idx = y * gridDim.x * blockDim.x + x;

    unsigned char *pixel = &imageRGBA[idx * 4];
    pixel[1] = static_cast<unsigned char>(pixel[1] * 0.35);
    pixel[2] = static_cast<unsigned char>(pixel[2] * 0.35);
}

// Função de kernel para criar uma imagem negativa
__global__ void ImageToNegative(unsigned char *imageRGBA)
{
    int x = blockIdx.x * blockDim.x + threadIdx.x;
    int y = blockIdx.y * blockDim.y + threadIdx.y;
    int idx = y * gridDim.x * blockDim.x + x;

    unsigned char *pixel = &imageRGBA[idx * 4];
    pixel[0] = static_cast<unsigned char>(255 - pixel[0]);
    pixel[1] = static_cast<unsigned char>(255 - pixel[1]);
    pixel[2] = static_cast<unsigned char>(255 - pixel[2]);
}

// Método para converter uma imagem em escala de cinza no dispositivo GPU
void useGPU::ConvertImageToGrayGpu(unsigned char *imageRGBA, int width, int height)
{
    ProcessImageGpu(imageRGBA, width, height, ImageToGray);
}

// Método para realçar a cor vermelha na imagem no dispositivo GPU
void useGPU::ConvertImageToRedGpu(unsigned char *imageRGBA, int width, int height)
{
    ProcessImageGpu(imageRGBA, width, height, ImageToRed);
}

// Método para criar uma imagem negativa no dispositivo GPU
void useGPU::ConvertImageToNegativeGpu(unsigned char *imageRGBA, int width, int height)
{
    ProcessImageGpu(imageRGBA, width, height, ImageToNegative);
}
