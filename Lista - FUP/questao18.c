#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    const float valorHoraNormal = 10.0;
    const float valorHoraExtra = 15.0;
    const float taxaImposto = 0.10; // 10% de impostos


    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &horasNormais);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);


    printf("Salário Bruto: R$ %.2f\n", (horasNormais * valorHoraNormal) + (horasExtras * valorHoraExtra));
    printf("Salário Líquido: R$ %.2f\n", ((horasNormais * valorHoraNormal) + (horasExtras * valorHoraExtra)) * (1.0 - taxaImposto));

    return 0;
}