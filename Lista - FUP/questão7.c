#include <stdio.h>

int main() {
    float pesoPrato;

  
    printf("Digite o peso do prato em quilos: ");
    scanf("%f", &pesoPrato);

    
    printf("O valor a pagar é de R$ %.2f\n", pesoPrato * 32.00);

    return 0;
}