#include <stdio.h>

int main() {
    int escolha;
    double valorCondominio = 350.0;
    double taxaExtra = 0.0;

    printf("Selecione o tipo de animal de estimação:\n");
    printf("1 - Gato\n");
    printf("2 - Papagaio\n");
    printf("3 - Cão\n");
    printf("4 ou qualquer outro valor - Nenhum\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            taxaExtra = 30.0;
            break;
        case 2:
            taxaExtra = 12.0; 
            break;
        case 3:
            taxaExtra = 50.0; 
            break;
        default:
            taxaExtra = -20.0; 
            break;
    }
    
    valorCondominio += taxaExtra;

    printf("O valor a ser pago de condomínio é: R$%.2lf\n", valorCondominio);

    return 0;
}