#include <stdio.h>

int main() {
    int moedas1Real, moedas50Centavos, moedas25Centavos, moedas10Centavos, moedas5Centavos;

    
    printf("Digite a quantidade de moedas de 1 real: ");
    scanf("%d", &moedas1Real);

    printf("Digite a quantidade de moedas de 50 centavos: ");
    scanf("%d", &moedas50Centavos);

    printf("Digite a quantidade de moedas de 25 centavos: ");
    scanf("%d", &moedas25Centavos);

    printf("Digite a quantidade de moedas de 10 centavos: ");
    scanf("%d", &moedas10Centavos);

    printf("Digite a quantidade de moedas de 5 centavos: ");
    scanf("%d", &moedas5Centavos);

   
    printf("O valor total economizado é R$ %.2f\n", (moedas1Real * 1.0) + (moedas50Centavos * 0.5) + (moedas25Centavos * 0.25) + (moedas10Centavos * 0.10) + (moedas5Centavos * 0.05));

    return 0;
}