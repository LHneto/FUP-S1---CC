#include <stdio.h>

int main() {
    printf("Números pares entre 2 e 50:\n");

    int numero = 2;
    
    while (numero <= 50) {
        printf("%d\n", numero);
        numero += 2;
    }

    return 0;
}