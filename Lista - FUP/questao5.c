#include <stdio.h>

int main() {
    int idade;

 
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    
    printf("Você já viveu pouco mais de %ld dias.\n", (long int)idade * 365);

    return 0;
}