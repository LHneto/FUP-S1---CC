#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioMinimo, horasExtras;

    
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

   
    float salarioBruto = horasTrabalhadas * (salarioMinimo / 100);

  
    float quantiaHorasExtras = horasExtras * 1.4 * (salarioMinimo / 100);

 
    float salarioReceber = salarioBruto + quantiaHorasExtras;

    
    printf("O salário a receber é: R$ %.2f\n", salarioReceber);

    return 0;
}







