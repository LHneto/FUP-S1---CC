#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 100

int ehPalindromo(char str[]) {
    int comprimento = strlen(str);
    int i, j;

    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        // Converte os caracteres para minúsculas antes de comparar
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Não é um palíndromo
        }
    }

    return 1; // É um palíndromo
}

int main() {
    char string[TAMANHO_MAXIMO];

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAXIMO, stdin);

    // Remover o caractere de nova linha (\n) adicionado pelo fgets
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    if (ehPalindromo(string)) {
        printf("%s é um palíndromo.\n", string);
    } else {
        printf("%s não é um palíndromo.\n", string);
    }

    return 0;
}