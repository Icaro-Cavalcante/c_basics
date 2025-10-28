#include <stdio.h>
#include <string.h>

int main() {

    char adjetivo1[30] = "";
    char substantivo[30] = "";
    char adjetivo2[30] = "";
    char verbo[30] = "";
    char adjetivo3[30] = "";
    
    printf("Insira um adjetivo (descrição): ");
    fgets(adjetivo1, sizeof(adjetivo1), stdin);
    adjetivo1[strlen(adjetivo1)-1] = '\0';
    
    printf("Insira um substantivo (animal ou pessoa): ");
    fgets(substantivo, sizeof(substantivo), stdin);
    substantivo[strlen(substantivo)-1] = '\0';
    
    printf("Insira um adjetivo (descrição): ");
    fgets(adjetivo2, sizeof(adjetivo2), stdin);
    adjetivo2[strlen(adjetivo2)-1] = '\0';
    
    printf("Insira um verbo (terminando com -ndo): ");
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strlen(verbo)-1] = '\0';
    
    printf("Insira um adjetivo (descrição): ");
    fgets(adjetivo3, sizeof(adjetivo3), stdin);
    adjetivo3[strlen(adjetivo3)-1] = '\0';


    printf("\nEu estava no caminho da minha %s escola.\nQuando cheguei lá eu vi %s.\n%s estava %s e %s.\nEu fiquei %s.", adjetivo1, substantivo, substantivo, adjetivo2, verbo, adjetivo3);

    return 0;
}