#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;

    printf("Digite a expressão no formato 'numero1 operacao numero2': ");
    scanf("%d %c %d", &num1, &operacao, &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", (double)num1 / num2);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}