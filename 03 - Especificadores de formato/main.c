#include <stdio.h>

int main() {
    // Especificador de formato - Tokens especiais que começam com o símbolo %, seguido por um caracter que especifica o dato e o seu modificador (tamanho, precisão, flags). Eles controlam como os dados são mostrados ou interpretados.

    /*
    int idade = 18;
    float nota = 7.5;
    double num = 1.123456789;
    char interrogacao = '?';
    char nome[] = "Icaro";

    printf("%d\n", idade);
    printf("%f\n", nota);
    printf("%lf\n", num);
    printf("%c\n", interrogacao);
    printf("%s\n", nome);

    */

    // tamanho:

    /*
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -10;
    int num5 = 400;

    printf("%3d\n", num1);
    printf("%-3d\n", num2); // Justifica pra esquerda
    printf("%04d\n", num3); // Substitui por 0
    printf("%+d\n", num4); // Retorna positivo se for positivo e negativo se for negativo
    printf("%+d\n", num5); // Retorna positivo se for positivo e negativo se for negativo
    */

    // precisão

    float preco1 = 7.45;
    float preco2 = 74.5;
    float preco3 = 896.4203;

    printf("%.1f", preco1); // .1 (ou qualquer número) determina a precisão do float, ou seja quantas casas decimais ele pode ter
    printf("\n%10.2f", preco1); // Antes do ponto temos a flag que determina um número mínimo
    printf("\n%+13.3f", preco1); // Podemos combinar os 3 também


    return 0;
}