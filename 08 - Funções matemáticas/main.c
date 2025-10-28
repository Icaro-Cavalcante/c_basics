#include <stdio.h>
#include <math.h>

int main() {

    float x = 16;
    x = sqrt(x); // raiz quadrada
    printf("%d\n",x);
    x = 2;
    x = pow(x, 6); // elevado a
    printf("%d\n",x);

    float y = 7.3;
    y = round(y); // arredondar
    printf("%.2f\n",y);
    
    y = 7.3;
    y = ceil(y); // arredondar para cima
    printf("%.2f\n",y);
    
    y = 10.7;
    y = floor(y); // arredondar para baixo
    printf("%.2f\n",y);
    
    float z = -14;
    z = abs(z); // módulo
    printf("%.2f\n",z);
    
    z = log(z); // logaritmo
    printf("%.2f\n",z);

    x = 30.0f;
    y = 45.0f;
    z = 60.0f;

    x = sin(x); // seno
    y = cos(y); // cosseno
    z = tan(z); // tangente

    printf("%f\n", x);
    printf("%f\n", y);
    printf("%f\n", z);


    return 0;
}