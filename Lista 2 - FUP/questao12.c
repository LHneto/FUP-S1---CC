#include <stdio.h>

int main() {
    char tipoApartamento;
    int numDiarias;
    double valorConsumo, valorDiaria, valorTotalDiarias, subtotal, taxaServico, totalGeral;

    printf("Digite o tipo de apartamento (A, B, C ou D): ");
    scanf(" %c", &tipoApartamento);

    switch (tipoApartamento) {
        case 'A':
            valorDiaria = 150.0;
            break;
        case 'B':
            valorDiaria = 100.0;
            break;
        case 'C':
            valorDiaria = 75.0;
            break;
        case 'D':
            valorDiaria = 175.0;
            break;
        default:
            printf("Tipo de apartamento inválido.\n");
            return 1; 
    }

    printf("Digite o número de diárias utilizadas: ");
    scanf("%d", &numDiarias);

    printf("Digite o valor do consumo interno: R$ ");
    scanf("%lf", &valorConsumo);

    valorTotalDiarias = valorDiaria * numDiarias;

    subtotal = valorTotalDiarias + valorConsumo;

    taxaServico = 0.10 * subtotal;

    totalGeral = subtotal + taxaServico;

    printf("\nConta Final:\n");
    printf("Tipo de Apartamento: %c\n", tipoApartamento);
    printf("Número de Diárias Utilizadas: %d\n", numDiarias);
    printf("Valor Unitário da Diária: R$ %.2lf\n", valorDiaria);
    printf("Valor Total das Diárias: R$ %.2lf\n", valorTotalDiarias);
    printf("Valor do Consumo Interno: R$ %.2lf\n", valorConsumo);
    printf("Subtotal: R$ %.2lf\n", subtotal);
    printf("Taxa de Serviço: R$ %.2lf\n", taxaServico);
    printf("Total Geral: R$ %.2lf\n", totalGeral);

    return 0;
}