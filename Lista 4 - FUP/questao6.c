#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_VETOR 50

// Função para calcular a mediana de um vetor
float calcularMediana(int vetor[], int tamanho) {
    float mediana;

    if (tamanho % 2 == 0) {
        // Se o tamanho do vetor for par, a mediana é a média dos dois elementos do meio
        mediana = (float)(vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2.0;
    } else {
        // Se o tamanho do vetor for ímpar, a mediana é o elemento do meio
        mediana = vetor[tamanho / 2];
    }

    return mediana;
}

// Função para verificar se um número está presente no vetor
bool contemNumero(int vetor[], int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return true;
        }
    }
    return false;
}

int main() {
    int vetor[TAMANHO_VETOR];
    int n;

    // Lendo os valores do vetor
    printf("Digite os %d valores inteiros:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lendo um número inteiro N
    printf("\nDigite um número inteiro N: ");
    scanf("%d", &n);

    // Verificando as operações baseadas no valor de N
    switch (n) {
        case 1:
            // Mostrar o vetor na ordem original
            printf("Vetor na ordem original:\n");
            for (int i = 0; i < TAMANHO_VETOR; i++) {
                printf("%d ", vetor[i]);
            }
            printf("\n");
            break;

        case 2:
            // Mostrar o vetor na ordem inversa
            printf("Vetor na ordem inversa:\n");
            for (int i = TAMANHO_VETOR - 1; i >= 0; i--) {
                printf("%d ", vetor[i]);
            }
            printf("\n");
            break;

        case 3:
            // Calcular e mostrar a mediana
            printf("A mediana do vetor é: %.2f\n", calcularMediana(vetor, TAMANHO_VETOR));
            break;

        case 4:
            // Calcular e mostrar o produto dos 50 números
            long long produto = 1;
            for (int i = 0; i < TAMANHO_VETOR; i++) {
                produto *= vetor[i];
            }
            printf("O produto dos 50 números é: %lld\n", produto);
            break;

        case 5:
            // Calcular e mostrar a porcentagem de valores pares positivos
            int paresPositivos = 0;
            for (int i = 0; i < TAMANHO_VETOR; i++) {
                if (vetor[i] % 2 == 0 && vetor[i] > 0) {
                    paresPositivos++;
                }
            }
            float porcentagem = (float)paresPositivos / TAMANHO_VETOR * 100.0;
            printf("A porcentagem de valores pares positivos é: %.2f%%\n", porcentagem);
            break;

        case 6:
            // Mostrar os números ímpares e sua soma
            printf("Números ímpares:\n");
            int somaImpares = 0;
            for (int i = 0; i < TAMANHO_VETOR; i++) {
                if (vetor[i] % 2 != 0) {
                    printf("%d ", vetor[i]);
                    somaImpares += vetor[i];
                }
            }
            printf("\nSoma dos números ímpares: %d\n", somaImpares);
            break;

        case 7:
            // Verificar e mostrar se há números repetidos
            printf("Números repetidos:\n");
            for (int i = 0; i < TAMANHO_VETOR; i++) {
                for (int j = i + 1; j < TAMANHO_VETOR; j++) {
                    if (vetor[i] == vetor[j] && !contemNumero(vetor, j, vetor[i])) {
                        printf("%d ", vetor[i]);
                        break;
                    }
                }
            }
            printf("\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}