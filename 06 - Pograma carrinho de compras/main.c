#include <stdio.h>
#include <string.h>

int main() {

    char item[30] = "";
    float preco = 0.0f;
    int quantidade = 0;
    float total = 0.0f;

    printf("Qual item deseja? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Qual o preço de cada? ");
    scanf("%f",&preco);

    printf("Qual a quantidade? ");
    scanf("%d",&quantidade);

    total = preco * quantidade;

    printf("Você comprou %d %s.\n",quantidade,item); 
    printf("O total deu R$%.2f.", total);

    return 0;
}