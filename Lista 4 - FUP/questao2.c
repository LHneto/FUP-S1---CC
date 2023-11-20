#include <stdio.h>

int main() {
    int K[30];

    // Lendo os elementos do vetor
    printf("Digite os elementos do vetor K[30]:\n");
    for (int i = 0; i < 30; i++) {
        printf("K[%d]: ", i);
        scanf("%d", &K[i]);
    }

    // Trocando elementos de ordem ímpar com elementos de ordem par imediatamente posterior
    for (int i = 1; i < 30; i += 2) {
        // Verifica se o índice é ímpar e se há um próximo elemento para troca
        if (i + 1 < 30) {
            int temp = K[i];
            K[i] = K[i + 1];
            K[i + 1] = temp;
        }
    }

    // Exibindo o vetor após a troca
    printf("Vetor K após a troca:\n");
    for (int i = 0; i < 30; i++) {
        printf("K[%d]: %d\n", i, K[i]);
    }

    return 0;
}