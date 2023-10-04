#include <stdio.h>

int main() {
    double salarioPessoa, financiamento, salarioConjuge;

    printf("Digite o valor do salário da pessoa: ");
    scanf("%lf", &salarioPessoa);

    printf("Digite o valor do financiamento pretendido: ");
    scanf("%lf", &financiamento);

    if (financiamento <= 5.0 * salarioPessoa || (financiamento <= 5.0 * (salarioPessoa + salarioConjuge))) {
       
        printf("Financiamento concedido\n");
    } else {
        
        printf("Digite o valor do salário do cônjuge: ");
        scanf("%lf", &salarioConjuge);

        if (financiamento <= 5.0 * (salarioPessoa + salarioConjuge)) {
            
            printf("Financiamento concedido\n");
        } else {
            
            printf("Financiamento Negado\n");
        }
    }

    
    printf("Obrigado por nos consultar.\n");

    return 0;
}