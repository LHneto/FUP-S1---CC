#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario;

    
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

   
    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    printf("O funcionário ganha %.2f salários mínimos.\n", salarioFuncionario / salarioMinimo);

    return 0;
}