#include <stdio.h>

int main() {
    double a, b, resultado;
    int operacao;

    printf("Digite o primeiro número (a): ");
    scanf("%lf", &a);

    printf("Digite o segundo número (b): ");
    scanf("%lf", &b);

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = a + b;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operacao == 2) {
        resultado = a - b;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operacao == 3) {
        resultado = a * b;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operacao == 4) {
        if (b != 0) {
            resultado = a / b;
            printf("Resultado: %.2lf\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else {
        printf("Operação inválida. Por favor, escolha uma operação válida (1 a 4).\n");
    }

    return 0;
}