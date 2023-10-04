#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 10 == 0) {
        printf("%d é divisível por 10.\n", numero);
    } 

    if (numero % 5 == 0) {
        printf("%d é divisível por 5.\n", numero);
    } 

    if (numero % 2 == 0) {
        printf("%d é divisível por 2.\n", numero);
    } 

    if (numero % 10 != 0 && numero % 5 != 0 && numero % 2 != 0) {
        printf("%d não é divisível por 10, 5 ou 2.\n", numero);
    }

    return 0;
}