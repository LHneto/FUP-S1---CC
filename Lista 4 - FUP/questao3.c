#include <stdio.h>

int main() {
    int vetor[20];

    // Lendo os elementos do vetor
    printf("Digite os elementos do vetor (20 posições):\n");
    for (int i = 0; i < 20; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Mostrando o vetor original
    printf("\nVetor original:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Trocando os elementos como especificado
    for (int i = 0; i < 10; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

    // Mostrando o vetor após a troca
    printf("\nVetor após a troca:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}