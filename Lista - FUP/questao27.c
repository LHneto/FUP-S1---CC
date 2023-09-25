#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura;

    
    printf("Digite a base maior do trapézio: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor do trapézio: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);

    
    printf("A área do trapézio é: %.2f\n", (baseMaior + baseMenor) * altura / 2);

    return 0;
}