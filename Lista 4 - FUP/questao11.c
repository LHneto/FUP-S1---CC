#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int vetorA[TAMANHO_VETOR];
    int vetorB[TAMANHO_VETOR];
    int vetorC[TAMANHO_VETOR];

    // Lendo os valores dos vetores A e B
    printf("Digite os %d valores do vetor A:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite os %d valores do vetor B:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Realizando as subtrações e acumulando os resultados no vetor C
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorC[i] = vetorA[i] - vetorB[TAMANHO_VETOR - 1 - i];
    }

    // Mostrando o vetor C
    printf("\nVetor C após as subtrações:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}