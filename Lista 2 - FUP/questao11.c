#include <stdio.h>

int main() {
    double valorCompra, valorParcela, valorTotal;
    int numParcelas;

    printf("Digite o valor da compra à vista: R$ ");
    scanf("%lf", &valorCompra);

    printf("Digite o número de parcelas desejado (1, 2 ou 3): ");
    scanf("%d", &numParcelas);

    if (numParcelas == 1) {
        valorParcela = valorCompra;
    } else if (numParcelas == 2) {
        valorParcela = valorCompra * 1.10 / 2; 
    } else {
        valorParcela = valorCompra * 1.20 / 3; 
    }

   
    valorTotal = valorParcela * numParcelas;

    
    printf("Número de Parcelas: %d\n", numParcelas);
    printf("Valor de cada Parcela: R$ %.2lf\n", valorParcela);
    printf("Valor Total a ser Pago: R$ %.2lf\n", valorTotal);

    return 0;
}
