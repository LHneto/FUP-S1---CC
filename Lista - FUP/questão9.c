#include <stdio.h>

int main() {
    int quantidade[3]; 
    float preco[3] = {10.0, 12.0, 15.0}; 

    float valorTotal = 0.0;

   
    printf("Digite a quantidade de camisetas pequenas vendidas: ");
    scanf("%d", &quantidade[0]);

    printf("Digite a quantidade de camisetas médias vendidas: ");
    scanf("%d", &quantidade[1]);

    printf("Digite a quantidade de camisetas grandes vendidas: ");
    scanf("%d", &quantidade[2]);

 
    for (int i = 0; i < 3; i++) {
        valorTotal += quantidade[i] * preco[i];
    }

   
    printf("O valor arrecadado é de R$ %.2f\n", valorTotal);

    return 0;
}