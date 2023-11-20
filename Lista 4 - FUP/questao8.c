#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    int vetor[TAMANHO_VETOR];

    // Lendo os valores do vetor
    printf("Digite os %d valores do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Calculando o valor de S conforme a fórmula
    int S = 0;
    int meio = TAMANHO_VETOR / 2;

    for (int i = 0; i < meio; i++) {
        int diferenca = vetor[i] - vetor[TAMANHO_VETOR - 1 - i];
        S += diferenca * diferenca;
    }

    // Imprimindo o valor de S
    printf("\nO valor de S é: %d\n", S);

    return 0;
}