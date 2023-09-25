#include <stdio.h>

int main() {
    float salarioInicial;

    
    printf("Digite o salário inicial do funcionário: R$ ");
    scanf("%f", &salarioInicial);

 
    salarioInicial *= 1.15; 

   
    salarioInicial *= 0.92; 

    printf("Salário inicial: R$ %.2f\n", salarioInicial / 1.15);
    printf("Salário com aumento de 15%%: R$ %.2f\n", salarioInicial);
    printf("Salário final após desconto de 8%% de impostos: R$ %.2f\n", salarioInicial);

    return 0;
}