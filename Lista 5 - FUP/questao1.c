#include <stdio.h>

int calcularPotencia(int a, int b);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = calcularPotencia(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}

int calcularPotencia(int a, int b) {
    
    if (b == 0) {
        return 1;
    } else {
        
        return a * calcularPotencia(a, b - 1);
    }
}