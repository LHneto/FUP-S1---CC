#include <stdio.h>

int main() {
    int N[20];

    // Lendo os elementos do vetor
    printf("Digite os elementos do vetor N[20]:\n");
    for (int i = 0; i < 20; i++) {
        printf("N[%d]: ", i);
        scanf("%d", &N[i]);
    }

    // Inicializando o menor com o primeiro elemento e a posição com 0
    int menor = N[0];
    int posicao = 0;

    // Encontrando o menor elemento e sua posição
    for (int i = 1; i < 20; i++) {
        if (N[i] < menor) {
            menor = N[i];
            posicao = i;
        }
    }

    // Exibindo o resultado
    printf("O menor elemento de N é %d e sua posição dentro do vetor é %d.\n", menor, posicao);

    return 0;
}