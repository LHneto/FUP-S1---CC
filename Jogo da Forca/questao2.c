#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    FILE *arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }

    
    for (int i = 1; i <= 20; i++) {
        fprintf(arquivo, "%d x %d = %d\n", numero, i, numero * i);
    }

    fclose(arquivo);

    printf("Tabuada foi escrita no arquivo tabuada.txt.\n");

    return 0; 
}