#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um número de até três dígitos: ");
    scanf("%d", &numero);

   
    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;

    printf("CENTENA = %d\n", centena);
    printf("DEZENA = %d\n", dezena);
    printf("UNIDADE = %d\n", unidade);

    return 0;