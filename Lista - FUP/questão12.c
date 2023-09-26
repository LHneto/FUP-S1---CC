#include <stdio.h>


int main() {
    float salario, salario_inicial, salario_com_aumento, salario_final;

    
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    
    salario_inicial = salario;

    
    salario_com_aumento = salario * 1.15;

    
    salario_final = salario_com_aumento * 0.92;

    
    printf("Salário inicial: R$ %.2f\n", salario_inicial);
    printf("Salário com aumento: R$ %.2f\n", salario_com_aumento);
    printf("Salário final após desconto de impostos: R$ %.2f\n", salario_final);

    return 0;
}
