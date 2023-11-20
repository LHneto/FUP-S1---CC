#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 100

void converterParaMaiuscula(char str[]) {
    int comprimento = strlen(str);
    int i = 0;

    // Percorre a string
    while (i < comprimento) {
        // Enquanto encontrar espaços, avança
        while (i < comprimento && isspace(str[i])) {
            i++;
        }

        // Converte a primeira letra após espaços para maiúscula
        if (i < comprimento) {
            str[i] = toupper(str[i]);
        }

        // Avança para o próximo caractere
        while (i < comprimento && !isspace(str[i])) {
            i++;
        }
    }
}

int main() {
    char string[TAMANHO_MAXIMO];

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAXIMO, stdin);

    // Remover o caractere de nova linha (\n) adicionado pelo fgets
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    converterParaMaiuscula(string);

    printf("String com a primeira letra de cada palavra em maiúscula: %s\n", string);

    return 0;
}