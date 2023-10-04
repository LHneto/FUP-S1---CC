#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    C = (A == B) ? (A + B) : (A * B);

    printf("O valor de C é: %d\n", C);

    return 0;
}