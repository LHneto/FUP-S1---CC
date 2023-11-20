#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 100

void removerEspacosRepetidos(char str[]) {
    int comprimento = strlen(str);
    int i, j;

    for (i = 0, j = 0; i < comprimento; i++) {
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1]))) {
            // Adiciona o caractere à nova string se não for um espaço em branco repetido
            str[j++] = str[i];
        }
    }

    // Adiciona o caractere nulo ao final da nova string
    str[j] = '\0';
}

int main() {
    char string[TAMANHO_MAXIMO];

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAXIMO, stdin);

    // Remover o caractere de nova linha (\n) adicionado pelo fgets
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    removerEspacosRepetidos(string);

    printf("String sem espaços em branco repetidos: %s\n", string);

    return 0;
}