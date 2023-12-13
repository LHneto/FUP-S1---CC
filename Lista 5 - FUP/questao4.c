#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int lerNumero() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    return numero;
}

int main() {
 
    int numero = lerNumero();

    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}