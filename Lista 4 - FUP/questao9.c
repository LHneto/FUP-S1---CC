#include <stdio.h>

#define TAMANHO_VETOR 15

int main() {
    int vetor[TAMANHO_VETOR];

    // Lendo os valores do vetor
    printf("Digite os %d valores do vetor:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Vetor[%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializando as variáveis para armazenar o maior e o menor elementos e suas posições
    int maior = vetor[0], menor = vetor[0];
    int posicaoMaior = 0, posicaoMenor = 0;

    // Encontrando o maior e o menor elementos do vetor e suas posições
    for (int i = 1; i < TAMANHO_VETOR; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        } else if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    // Mostrando o maior elemento e sua posição
    printf("\nO maior elemento do vetor é %d e está na posição %d.\n", maior, posicaoMaior + 1);

    // Mostrando o menor elemento e sua posição
    printf("O menor elemento do vetor é %d e está na posição %d.\n", menor, posicaoMenor + 1);

    return 0;
}