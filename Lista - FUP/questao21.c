#include <stdio.h>

int main() {
    int latas, garrafas600ml, garrafas2litros;


    printf("Digite a quantidade de latas de 350 ml compradas: ");
    scanf("%d", &latas);

    printf("Digite a quantidade de garrafas de 600 ml compradas: ");
    scanf("%d", &garrafas600ml);

    printf("Digite a quantidade de garrafas de 2 litros compradas: ");
    scanf("%d", &garrafas2litros);

  
    printf("O comerciante comprou %.2f litros de refrigerante no total.\n", (latas * 0.35) + (garrafas600ml * 0.6) + (garrafas2litros * 2.0));

    return 0;
}