#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor;

   
    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    
    printf("A área do losango é: %.2f\n", (diagonalMaior * diagonalMenor) / 2);

    return 0;
}