#include <stdio.h>
#include <math.h>

int main() {

    float montante = 0.0f;
    float capital = 0.0f;
    float periodo = 0.0f;
    float taxa = 0.0f;
    
    printf("Vamos calcular juros compostos\n");
    printf("Informe o capital: ");
    scanf("%f",&capital);
    printf("\nInforme o periodo: ");
    scanf("%f",&periodo);
    printf("\nInfome a taxa: ");
    scanf("%f",&taxa);

    taxa = taxa / 100;
    montante = capital* pow((1+taxa), periodo);
    printf("Montante: %.2f", montante);

    return 0;


}