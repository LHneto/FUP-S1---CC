#include <stdio.h>

#define MAX_ELEMENTOS 10

// Função para trocar dois elementos do vetor
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar um vetor em ordem crescente usando Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Se o elemento atual for maior que o próximo, troque-os
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int vetor[MAX_ELEMENTOS];
    int N;

    // Lendo a quantidade de elementos N (até 10)
    printf("Digite a quantidade de elementos (até %d): ", MAX_ELEMENTOS);
    scanf("%d", &N);

    // Lendo os elementos do vetor
    printf("Digite os %d elementos:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Chamando a função para ordenar o vetor em ordem crescente usando Bubble Sort
    bubbleSort(vetor, N);

    // Exibindo o vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}