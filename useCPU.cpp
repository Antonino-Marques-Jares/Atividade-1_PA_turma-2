// Função para converter uma imagem em escala de cinza
inline void ConvertImageToGray(unsigned char *imageRGBA, int width, int height)
{
    for (int i = 0; i < width * height; i++)
    {
        // Obtenha um ponteiro para o pixel atual
        unsigned char *pixel = &imageRGBA[i * 4];

        // Calcule o valor em escala de cinza com base nas componentes RGB
        unsigned char grayValue = static_cast<unsigned char>(0.2989 * pixel[0] + 0.5870 * pixel[1] + 0.1140 * pixel[2]);

        // Defina todos os componentes de cor para o valor em escala de cinza
        pixel[0] = grayValue; // Red
        pixel[1] = grayValue; // Green
        pixel[2] = grayValue; // Blue
    }
}

// Função para destacar a cor vermelha na imagem
inline void ConvertImageToRed(unsigned char *imageRGBA, int width, int height)
{
    for (int i = 0; i < width * height; i++)
    {
        // Obtenha um ponteiro para o pixel atual
        unsigned char *pixel = &imageRGBA[i * 4];

        // Reduza a influência sobre a imagem dos componentes de cor verde e azul
        pixel[1] = static_cast<unsigned char>(pixel[1] * 0.35); // Green
        pixel[2] = static_cast<unsigned char>(pixel[2] * 0.35); // Blue
    }
}

// Função para criar uma imagem negativa
inline void ConvertImageToNegative(unsigned char *imageRGBA, int width, int height)
{
    for (int i = 0; i < width * height; i++)
    {
        // Obtenha um ponteiro para o pixel atual
        unsigned char *pixel = &imageRGBA[i * 4];

        // Defina todos os componentes de cor para o valor "inverso"
        pixel[0] = static_cast<unsigned char>(255 - pixel[0]); // Red
        pixel[1] = static_cast<unsigned char>(255 - pixel[1]); // Green
        pixel[2] = static_cast<unsigned char>(255 - pixel[2]); // Blue
    }
}
