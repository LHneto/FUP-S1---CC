#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);

    int i = 1;
    while (i <= 10) {
        printf("%dx%d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}