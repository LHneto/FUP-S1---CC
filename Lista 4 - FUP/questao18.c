#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 1000

int contarPalavras(char frase[]) {
    int comprimento = strlen(frase);
    int contadorPalavras = 0;
    int dentroDaPalavra = 0; // Flag para indicar se estamos dentro de uma palavra

    // Percorre a string
    for (int i = 0; i < comprimento; i++) {
        // Se encontrar um caractere não espaço e ainda não estamos dentro de uma palavra, incrementa o contador de palavras
        if (!isspace(frase[i]) && !dentroDaPalavra) {
            contadorPalavras++;
            dentroDaPalavra = 1; // Atualiza a flag para indicar que estamos dentro de uma palavra
        }
        // Se encontrar um espaço, atualiza a flag para indicar que não estamos mais dentro de uma palavra
        else if (isspace(frase[i])) {
            dentroDaPalavra = 0;
        }
    }

    return contadorPalavras;
}

int main() {
    char frase[TAMANHO_MAXIMO];

    printf("Digite uma frase: ");
    fgets(frase, TAMANHO_MAXIMO, stdin);

    // Remover o caractere de nova linha (\n) adicionado pelo fgets
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    int numeroPalavras = contarPalavras(frase);

    printf("Número de palavras na frase: %d\n", numeroPalavras);

    return 0;
}