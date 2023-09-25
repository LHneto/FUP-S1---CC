#include <stdio.h>

int main() {
    int numeroFrangos;
    float custoAnelChip = 4.0;
    float custoAnelAlimento = 3.5;
    float gastoTotalPorFrango, gastoTotal;

 
    printf("Digite o número total de frangos: ");
    scanf("%d", &numeroFrangos);

  
    gastoTotalPorFrango = custoAnelChip + (2 * custoAnelAlimento);

    
    gastoTotal = gastoTotalPorFrango * numeroFrangos;

    printf("O gasto total para marcar todos os frangos é R$ %.2f\n", gastoTotal);

    return 0;
}