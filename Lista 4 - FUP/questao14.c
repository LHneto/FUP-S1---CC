#include <stdio.h>

int encontrarSomaMaxima(int array[], int n, int *inicio, int *fim) {
    int maxAtual = array[0];
    int maxGlobal = array[0];
    *inicio = 0;
    *fim = 0;
    int inicioAtual = 0;

    for (int i = 1; i < n; i++) {
        // Encontrar o máximo entre o número atual e a soma até o número atual
        if (array[i] > maxAtual + array[i]) {
            maxAtual = array[i];
            inicioAtual = i;
        } else {
            maxAtual = maxAtual + array[i];
        }

        // Atualizar o máximo global se necessário
        if (maxAtual > maxGlobal) {
            maxGlobal = maxAtual;
            *inicio = inicioAtual;
            *fim = i;
        }
    }

    return maxGlobal;
}

int main() {
    int n;

    printf("Digite o tamanho da sequência (n): ");
    scanf("%d", &n);

    int sequencia[n];

    printf("Digite os %d números inteiros da sequência:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &sequencia[i]);
    }

    int inicio, fim;
    int somaMaxima = encontrarSomaMaxima(sequencia, n, &inicio, &fim);

    printf("\nA soma do segmento máximo é: %d\n", somaMaxima);
    printf("O segmento de soma máxima está no intervalo [%d, %d].\n", inicio, fim);

    return 0;
}