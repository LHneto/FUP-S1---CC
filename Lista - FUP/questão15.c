#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;


    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);


    printf("Percentual de votos brancos: %.2f%%\n", (float)votosBrancos / totalEleitores * 100);
    printf("Percentual de votos nulos: %.2f%%\n", (float)votosNulos / totalEleitores * 100);
    printf("Percentual de votos válidos: %.2f%%\n", (float)votosValidos / totalEleitores * 100);

    return 0;
}