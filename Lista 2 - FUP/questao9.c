#include <stdio.h>

int main() {
    double nota1, nota2, media;
    char conceito;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    // Calcula a média
    media = (nota1 + nota2) / 2.0;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Média: %.2lf\n", media);
    printf("Conceito: %c\n", conceito);

  
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}






