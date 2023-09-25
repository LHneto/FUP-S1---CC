#include <stdio.h>

int main() {
    int numeroCavalos;

    printf("Digite o número de cavalos no haras: ");
    
    scanf("%d", &numeroCavalos);
    
    printf("Você precisará de %d ferraduras para equipar todos os cavalos no haras.\n", numeroCavalos * 4);

    return 0;
}