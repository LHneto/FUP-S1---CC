#include <stdio.h>

int main() {
    double valorCompra;
    int anoNascimento;
    double numeroSorte;

    printf("Digite o Valor Total da Compra: ");
    scanf("%lf", &valorCompra);

    printf("Digite o Ano de Nascimento: ");
    scanf("%d", &anoNascimento);

    if (valorCompra < 500.0) {
        numeroSorte = 5000 - valorCompra * (2023 - anoNascimento);
    } else if (valorCompra > 500.0) {
        numeroSorte = 50000 - valorCompra * (2023 - anoNascimento);
    } else {
        numeroSorte = anoNascimento * anoNascimento;
    }

    printf("Seu número da sorte é: %.2lf\n", numeroSorte);

    return 0;
}
