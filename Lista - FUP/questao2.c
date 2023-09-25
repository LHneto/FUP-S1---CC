#include <stdio.h>

int main() {
    float comprimento, largura;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("A área do terreno é: %.2f metros quadrados\n", comprimento * largura);

    return 0;
}