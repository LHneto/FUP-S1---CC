#include <stdio.h>

int main() {
    float pesoKilos;

    
    printf("Digite o peso da pessoa em quilos: ");
    scanf("%f", &pesoKilos);

    
    printf("Peso em gramas: %.2f g\n", pesoKilos * 1000);

    
    printf("Novo peso se engordar 15%%: %.2f kg\n", pesoKilos * 1.15);

    
    printf("Novo peso se emagrecer 20%%: %.2f kg\n", pesoKilos * 0.80);

    return 0;
}