#include <stdio.h>

#define TAMANHO_VETOR 15

// Função para encontrar o maior elemento do vetor
int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

int main() {
    int vetor[TAMANHO_VETOR];

    // Lendo os valores do vetor e encontrando o maior elemento simultaneamente
    int maior = vetor[0];
    printf("Digite os %d valores do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Vetor[%d]: ", i + 1);
        scanf("%d", &vetor[i]);

        // Atualizando o maior elemento se necessário
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Multiplicando todos os elementos pelo maior valor
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] *= maior;
    }

    // Mostrando o vetor após os cálculos
    printf("\nVetor após multiplicar todos os elementos pelo maior valor (%d):\n", maior);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}