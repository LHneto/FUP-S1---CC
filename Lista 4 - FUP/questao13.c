#include <stdio.h>

#define MAX_ELEMENTOS 100

int main() {
    int n;

    printf("Digite o tamanho da sequência (n): ");
    scanf("%d", &n);

    // Certificando-se de que o valor de n está dentro do limite
    if (n <= 0 || n > MAX_ELEMENTOS) {
        printf("Por favor, insira um valor válido para n (entre 1 e %d).\n", MAX_ELEMENTOS);
        return 1;
    }

    double sequencia[MAX_ELEMENTOS];
    int contagem[MAX_ELEMENTOS] = {0}; // Inicializa todas as contagens para zero
    int totalNumerosDistintos = 0;

    // Lendo a sequência de números reais e contando as ocorrências
    printf("Digite os %d números reais da sequência:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%lf", &sequencia[i]);

        int j;
        // Verifica se o número já ocorreu antes na sequência
        for (j = 0; j < totalNumerosDistintos; j++) {
            if (sequencia[i] == sequencia[j]) {
                contagem[j]++;
                break;
            }
        }

        // Se o número não ocorreu antes, adiciona-o à lista de números distintos
        if (j == totalNumerosDistintos) {
            sequencia[totalNumerosDistintos] = sequencia[i];
            contagem[totalNumerosDistintos]++;
            totalNumerosDistintos++;
        }
    }

    // Exibindo a quantidade de vezes que cada número ocorre
    printf("\nSaída:\n");
    for (int i = 0; i < totalNumerosDistintos; i++) {
        printf("%.2f ocorre %d vezes\n", sequencia[i], contagem[i]);
    }

    return 0;
}