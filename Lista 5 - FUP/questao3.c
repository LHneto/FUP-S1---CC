#include <stdio.h>

void lerSequencia(int n, int numeros[]) {
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

int somaNumerosPares(int n, int numeros[]) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            soma += numeros[i];
        }
    }
    return soma;
}

int main() {
    int n;

    
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("O valor de n deve ser um número positivo.\n");
        return 1; 
    }

    int numeros[n];

    lerSequencia(n, numeros);

    int somaPares = somaNumerosPares(n, numeros);

    printf("A soma dos números pares na sequência é: %d\n", somaPares);

    return 0; 
}