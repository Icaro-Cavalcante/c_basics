#include <stdio.h>
#include <math.h>

int main() {

    float raio = 0.0f;
    float diametro = 0.0f;
    const float pi = 3.14;
    float area_circulo = 0.0f;
    float area_esfera = 0.0f;
    float volume = 0.0f;

    printf("Qual o raio? ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    area_circulo = pi * pow(raio, 2);
    area_esfera = 4 * area_circulo;
    volume = ((pi*4)/3) * pow(raio, 3);

    printf("\n\nDiametro: %.2f\nÁrea do círculo: %.2f\nÁrea da esfera: %.2f\nVolume: %.2f",diametro,area_circulo,area_esfera,volume);
    
    return 0;
}