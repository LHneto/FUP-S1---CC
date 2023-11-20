#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO_FRASE 1000
#define TAMANHO_MAXIMO_PALAVRA 100

int contarOcorrencias(char frase[], char palavra[]) {
    int comprimentoFrase = strlen(frase);
    int comprimentoPalavra = strlen(palavra);
    int ocorrencias = 0;

    char *ptr = frase;

    // Procura a palavra na frase
    while ((ptr = strstr(ptr, palavra)) != NULL) {
        ocorrencias++;
        ptr += comprimentoPalavra; // Avança para continuar a busca
    }

    return ocorrencias;
}

int main() {
    char frase[TAMANHO_MAXIMO_FRASE];
    char palavra[TAMANHO_MAXIMO_PALAVRA];

    printf("Digite uma frase: ");
    fgets(frase, TAMANHO_MAXIMO_FRASE, stdin);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int numeroOcorrencias = contarOcorrencias(frase, palavra);

    printf("Temos que a palavra ocorre %d vezes na frase.\n", numeroOcorrencias);

    return 0;
}