#include <stdio.h>

int main () {

    int x = 18;
    int y = 3;
    int z;

    z = x + y; // soma
    printf("%d\n",z);
    z = x - y; // subtração
    printf("%d\n",z);
    z = x * y; // multiplicação
    printf("%d\n",z);
    z = x / y; // divisão
    printf("%d\n",z);
    z = x % y; // resto da divisão
    printf("%d\n",z);
    x++; // aumenta 1
    printf("%d\n",x);
    y--; // diminui 1
    printf("%d\n",y);
    x+= 5; // o += aumenta o valor da variavel com a soma da variavel valor inserido após o =. serve para -, * e / também


    return 0;
}