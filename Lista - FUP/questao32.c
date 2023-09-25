#include <stdio.h>

int main() {
    float salarioJoao, conta1, conta2, totalMulta, saldoRestante;

    
    printf("Digite o salário de João: ");
    scanf("%f", &salarioJoao);

  
    printf("Digite o valor da primeira conta atrasada: ");
    scanf("%f", &conta1);

    
    printf("Digite o valor da segunda conta atrasada: ");
    scanf("%f", &conta2);

    
    totalMulta = 0.02 * (conta1 + conta2);

    
    saldoRestante = salarioJoao - (conta1 + conta2 + totalMulta);

   
    printf("O saldo restante de João é: R$ %.2f\n", saldoRestante);

    return 0;
}