#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    // Solicitar ao usuário que insira o ano de nascimento e o ano atual
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

   
    idadeAnos = anoAtual - anoNascimento;


    idadeDias = idadeAnos * 365 + ((anoAtual - 1 - anoNascimento) / 4) - ((anoAtual - 1 - anoNascimento) / 100) + ((anoAtual - 1 - anoNascimento) / 400);

    
    idadeMeses = idadeDias / 30;

   
    idadeSemanas = idadeDias / 7;

    
    printf("Idade em anos: %d anos\n", idadeAnos);
    printf("Idade em meses: %d meses\n", idadeMeses);
    printf("Idade em dias: %d dias\n", idadeDias);
    printf("Idade em semanas: %d semanas\n", idadeSemanas);

    return 0;
}