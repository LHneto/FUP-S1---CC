#include <stdio.h>

int main() {
    double salario, desconto, salarioFinal;

    printf("Digite o salário da pessoa: R$ ");
    scanf("%lf", &salario);

    if (salario <= 600.00) {
        desconto = 0.0;
    } else if (salario <= 1200.00) {
        desconto = salario * 0.20;
    } else if (salario <= 2000.00) {
        desconto = salario * 0.25;
    } else {
        desconto = salario * 0.30;
    }

    salarioFinal = salario - desconto;

    printf("Salário Inicial: R$ %.2lf\n", salario);
    printf("Desconto do INSS: R$ %.2lf\n", desconto);
    printf("Salário Final com Desconto: R$ %.2lf\n", salarioFinal);

    return 0;
}