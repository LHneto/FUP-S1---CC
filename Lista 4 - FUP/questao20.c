#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO_FRASE 100

void encontrarPalavraMaisLonga(char frase[]) {
    char palavraMaisLonga[TAMANHO_MAXIMO_FRASE];
    char palavraAtual[TAMANHO_MAXIMO_FRASE];

    int comprimentoMaximo = 0;
    int comprimentoAtual = 0;

    // Inicializa um ponteiro para percorrer a frase
    char *ptr = frase;

    while (*ptr != '\0') {
        // Ignora espaços em branco no início da palavra
        while (*ptr == ' ') {
            ptr++;
        }

        // Inicia a formação da palavra atual
        comprimentoAtual = 0;
        while (*ptr != ' ' && *ptr != '\0') {
            palavraAtual[comprimentoAtual] = *ptr;
            comprimentoAtual++;
            ptr++;
        }
        palavraAtual[comprimentoAtual] = '\0';

        // Verifica se a palavra atual é a mais longa até agora
        if (comprimentoAtual > comprimentoMaximo) {
            comprimentoMaximo = comprimentoAtual;
            strcpy(palavraMaisLonga, palavraAtual);
        }

        // Ignora espaços em branco no final da palavra
        while (*ptr == ' ') {
            ptr++;
        }
    }

    printf("A palavra mais longa na frase é: %s\n", palavraMaisLonga);
}

int main() {
    char frase[TAMANHO_MAXIMO_FRASE];

    printf("Digite uma frase: ");
    fgets(frase, TAMANHO_MAXIMO_FRASE, stdin);

    // Remover o caractere de nova linha (\n) adicionado pelo fgets
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    encontrarPalavraMaisLonga(frase);

    return 0;
}