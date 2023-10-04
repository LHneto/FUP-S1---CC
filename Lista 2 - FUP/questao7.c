#include <stdio.h>

int main() {
    double salarioAtual, novoSalario;
    char funcao;

    printf("Digite o salário atual: R$ ");
    scanf("%lf", &salarioAtual);

    printf("Digite a função (T para Técnico, G para Gerente, ou D para Demais): ");
    scanf(" %c", &funcao);

    if ((funcao == 'T' || funcao == 't')) {
        novoSalario = salarioAtual * 1.5; 
    } else if ((funcao == 'G' || funcao == 'g')) {
        novoSalario = salarioAtual * 1.3; 
    } else if ((funcao == 'D' || funcao == 'd')) {
        novoSalario = salarioAtual * 1.2; 
    } else {
        printf("Função não reconhecida.\n");
        return 1; 
    }

    printf("Novo salário: R$ %.2lf\n", novoSalario);

    return 0;
}