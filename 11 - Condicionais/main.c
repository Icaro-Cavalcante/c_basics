#include <stdio.h>
#include <string.h>

int main() {

    /*
    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 60) {
        printf("Voce é um idoso.");
    }
    else if (idade>=18) {
        printf("Você é um adulto");
    }
    else {
        printf("Você é menor de idade");
    }
    */
    

    char nome[50] = "";
    printf("\nInsira seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';

    if (strlen(nome) == 0) {
        printf("Você não inseriu seu nome.");
    }
    else {
        printf("Olá, %s", nome);
    }


    return 0;
}