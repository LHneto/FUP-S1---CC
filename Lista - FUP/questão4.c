#include <stdio.h>

int main() {
    int quantidadePaes, quantidadeBroas;
    const float precoPao = 0.50; 
   
    const float precoBroa = 1.50; 


    printf("Digite a quantidade de pães vendidos: ");
   
    scanf("%d", &quantidadePaes);

    printf("Digite a quantidade de broas vendidas: ");
  
    scanf("%d", &quantidadeBroas);

    printf("Total arrecadado com as vendas: R$ %.2f\n", (quantidadePaes * precoPao) + (quantidadeBroas * precoBroa));
    
    printf("Valor a ser guardado na conta de poupança: R$ %.2f\n", 0.10 * ((quantidadePaes * precoPao) + (quantidadeBroas * precoBroa)));

    return 0;
}