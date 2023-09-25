#include <stdio.h>

int main() {
    int A = 10;
    int B = 20;

    // Troca os valores de A e B sem variável temporária
    A = A + B;
    B = A - B;
    A = A - B;

    // Exibe os valores após a troca
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}