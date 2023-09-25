#include <stdio.h>

int main() {
    float salarioFixo, valorVendas;

    
    printf("Digite o salário fixo do funcionário: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas realizadas pelo funcionário: ");
    scanf("%f", &valorVendas);

    
    printf("A comissão é: R$ %.2f\n", 0.04 * valorVendas);

    
    printf("O salário final do funcionário é: R$ %.2f\n", salarioFixo + 0.04 * valorVendas);

    return 0;
}