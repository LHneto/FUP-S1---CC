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

int somaPrimosNoIntervalo(int inicio, int fim) {
    int soma = 0;

    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            soma += i;
        }
    }

    return soma;
}

int main() {
 
    int numero1 = lerNumero();
    int numero2 = lerNumero();

    if (numero1 > numero2) {
        printf("Erro: O primeiro número deve ser menor ou igual ao segundo.\n");
        return 1; 
    }

    int resultado = somaPrimosNoIntervalo(numero1, numero2);

    printf("A soma dos números primos no intervalo [%d, %d] é: %d\n", numero1, numero2, resultado);

    return 0; 
}