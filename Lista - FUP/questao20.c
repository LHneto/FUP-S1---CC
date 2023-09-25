#include <stdio.h>

int main() {
    int quantidadeNovelos, quantidadeBlusas;

 
    printf("Digite a quantidade total de novelos de lã: ");
    scanf("%d", &quantidadeNovelos);

    printf("Digite a quantidade de blusas produzidas: ");
    scanf("%d", &quantidadeBlusas);

    
    printf("A confecção gasta %.2f novelos de lã por blusa.\n", (float)quantidadeNovelos / quantidadeBlusas);

    return 0;
}