#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_K 15

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int K[TAMANHO_K];
    int P[TAMANHO_K]; // O tamanho máximo de P é TAMANHO_K

    // Lendo os valores de K
    printf("Digite os valores inteiros não negativos de K(15):\n");
    for (int i = 0; i < TAMANHO_K; i++) {
        printf("K[%d]: ", i);
        scanf("%d", &K[i]);
    }

    // Construindo o vetor P com números primos de K
    int contadorP = 0;
    for (int i = 0; i < TAMANHO_K; i++) {
        if (ehPrimo(K[i])) {
            P[contadorP++] = K[i];
        }
    }

    // Imprimindo o vetor P
    printf("\nVetor P contendo os números primos de K:\n");
    for (int i = 0; i < contadorP; i++) {
        printf("%d ", P[i]);
    }
    printf("\n");

    return 0;
}