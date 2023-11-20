#include <stdio.h>

#define MAX_DIGITOS 10

void somarSequencias(int sequencia1[], int sequencia2[], int resultado[], int n) {
    int carry = 0;  // Vai armazenar o valor excedente durante as somas

    for (int i = n - 1; i >= 0; i--) {
        int soma = sequencia1[i] + sequencia2[i] + carry;

        resultado[i + 1] = soma % 10;  // Atualiza o algarismo atual do resultado
        carry = soma / 10;              // Atualiza o carry para a próxima soma
    }

    resultado[0] = carry;  // O primeiro algarismo pode conter o carry restante
}

int main() {
    int n;

    printf("Digite o número de algarismos (n): ");
    scanf("%d", &n);

    // Certificando-se de que o valor de n está dentro do limite
    if (n <= 0 || n > MAX_DIGITOS) {
        printf("Por favor, insira um valor válido para n (entre 1 e %d).\n", MAX_DIGITOS);
        return 1;
    }

    int sequencia1[MAX_DIGITOS];
    int sequencia2[MAX_DIGITOS];
    int resultado[MAX_DIGITOS + 1];  // O resultado pode ter até n + 1 dígitos

    // Lendo a primeira sequência
    printf("Digite os %d algarismos da primeira sequência:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Algarismo %d: ", i + 1);
        scanf("%d", &sequencia1[i]);
    }

    // Lendo a segunda sequência
    printf("Digite os %d algarismos da segunda sequência:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Algarismo %d: ", i + 1);
        scanf("%d", &sequencia2[i]);
    }

    // Chamando a função para somar as sequências
    somarSequencias(sequencia1, sequencia2, resultado, n);

    // Exibindo o resultado da soma
    printf("\nResultado da soma:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}