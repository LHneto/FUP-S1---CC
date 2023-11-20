#include <stdio.h>

int main() {
    char gabarito[10];
    char respostas[10];
    int acertos;

    // Lendo o gabarito
    printf("Digite o gabarito da prova (10 caracteres): ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }

    // Para cada aluno
    for (int aluno = 1; aluno <= 50; aluno++) {
        // Lendo as respostas do aluno
        printf("\nAluno %d - Digite as respostas (10 caracteres): ", aluno);
        for (int i = 0; i < 10; i++) {
            scanf(" %c", &respostas[i]);
        }

        // Contando os acertos
        acertos = 0;
        for (int i = 0; i < 10; i++) {
            if (respostas[i] == gabarito[i]) {
                acertos++;
            }
        }

        // Exibindo o resultado para o aluno
        printf("Aluno %d acertou %d questões. ", aluno, acertos);

        // Verificando se o aluno está aprovado ou reprovado
        if (acertos >= 6) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    return 0;
}