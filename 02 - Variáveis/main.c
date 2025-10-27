#include <stdio.h>
#include <stdbool.h>

int main() {

    int idade = 18;
    printf("Eu tenho %d anos.\n", idade);

    int ano = 2025;
    printf("Estamos no ano %d.\n", ano);
    
    float nota = 8.5; 
    printf("Eu tirei %.1f em matemática.\n", nota);

    // Float só consegue colocar 6 ou 7 dígitos após a vírgula

    float num = 4.12345678;
    printf("%f\n", num); // Aqui não mostra o 7 e o 8, por exemplo
    
    double num2 = 4.12345678; // Double pode mostrar ate 15 digitos após a vírgula
    printf("%.8lf", num2);

    char nota_americana = 'A';
    printf("\nSua nota é %c\n", nota_americana);

    char nome[] = "Icaro"; // Em C não temos string, mas podemos fazer um array de caracteres
    printf("Meu nome é %s.\n", nome);

    char comida[] = "bolo";
    printf("Gosto muito de %s.\n", comida);

    bool programando_em_c = 1; // True
    bool programando_em_python = 0; // False
    bool programando_em_javascript = false; // False

    if (programando_em_c) {
        printf("Você está prgramando em C.");
    }
    else {
        printf("Você não está prgramando em C.");
    }

    if (! programando_em_javascript) {
        printf("\nVocê não está programando em javascript.");
    }
    
    return 0;
}