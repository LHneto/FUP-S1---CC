#include <stdio.h>

int main() {
    float lado;

  
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    
    printf("A área do quadrado é: %.2f\n", lado * lado);

    return 0;
}