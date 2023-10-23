#include <stdio.h>

long long calcularFatorial(int numero) {
    if (numero == 0) {
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de números negativos não é definido.\n");
    } else {
        long long fatorial = calcularFatorial(numero);
        printf("O fatorial de %d é %lld\n", numero, fatorial);
    }

    return 0;
}