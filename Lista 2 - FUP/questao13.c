#include <stdio.h>

int main() {
    int idade;
    char turma;

    printf("Digite a idade da criança: ");
    scanf("%d", &idade);

    if (idade >= 4 && idade <= 5) {
        turma = 'A';
    } else if (idade >= 6 && idade <= 8) {
        turma = 'B';
    } else if (idade >= 9 && idade <= 10) {
        turma = 'C';
    } else {
        turma = 'N'; 
    }
   
    if (turma == 'N') {
        printf("A escolinha não possui turmas para esta criança.\n");
    } else {
        printf("A criança está na Turma %c.\n", turma);
    }

    return 0;
}