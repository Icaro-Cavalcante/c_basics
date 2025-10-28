#include <stdio.h>
#include <string.h>

int main() {

    int idade = 0;
    float nota = 0.0;
    char caracter = '\0';
    char nome[30] = "";

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira sua nota: ");
    scanf("%f", &nota);
    printf("Insira seu caracter: ");
    scanf(" %c", &caracter);

    getchar();
    printf("Insira seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';
    printf("%s\n", nome);   
    
    printf("%d\n", idade);
    printf("%f\n", nota);
    printf("%c\n", caracter);
    

    return 0;
}