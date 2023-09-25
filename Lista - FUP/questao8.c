#include <stdio.h>

int main() {
    int dia, mes;

   
    printf("Digite o dia (1-30): ");
    scanf("%d", &dia);

    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);

    
    printf("Desde o início do ano, se passaram %d dias.\n", (mes - 1) * 30 + dia);

    return 0;
}