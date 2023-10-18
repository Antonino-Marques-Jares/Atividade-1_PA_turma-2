#ifndef GPUFUNC_H
#define GPUFUNC_H

// Declaração da classe useGPU, que contém métodos para processar imagens no dispositivo GPU
class useGPU
{
public:
	// Método para converter uma imagem em escala de cinza no dispositivo GPU
	void ConvertImageToGrayGpu(unsigned char *imageRGBA, int width, int height);

	// Método para realçar a cor vermelha na imagem no dispositivo GPU
	void ConvertImageToRedGpu(unsigned char *imageRGBA, int width, int height);

	// Método para criar uma imagem negativa no dispositivo GPU
	void ConvertImageToNegativeGpu(unsigned char *imageRGBA, int width, int height);
};

#endif
