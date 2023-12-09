#include <stdio.h>

int somarArray(int *array, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(array + i);
    }

    return soma;
}

int main() {

    int meuArray[] = {1, 2, 3, 4, 5};
    int tamanhoArray = sizeof(meuArray) / sizeof(meuArray[0]);

    int resultado = somarArray(meuArray, tamanhoArray);
    printf("A soma dos elementos do array é: %d\n", resultado);

    return 0;
}