#include <stdio.h>

int main() {
    double valorCompra, valorVenda, lucroPercentual;
  
    printf("Digite o valor de compra do produto: R$ ");
    scanf("%lf", &valorCompra);
    
    lucroPercentual = (valorCompra < 20.00) ? 0.45 : 0.30;

    valorVenda = valorCompra * (1.0 + lucroPercentual);

    printf("O valor de venda do produto é: R$ %.2lf\n", valorVenda);

    return 0;
}