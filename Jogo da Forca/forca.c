#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define TAMANHO_PALAVRA 20
#define MAX_PALAVRAS 100

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

int nivel = 0;

void abertura() {
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void solicitaNivel() {
    do {
        printf("Escolha o nível de dificuldade (1-Fácil, 2-Médio, 3-Difícil): ");
        scanf("%d", &nivel);
    } while (nivel < 1 || nivel > 3);
}

void chuta() {
    char chute;
    do {
        printf("Qual letra? ");
        scanf(" %c", &chute);
        chute = toupper(chute); // Converte para maiúscula
        if (chute < 'A' || chute > 'Z') {
            printf("Digite apenas letras maiúsculas. Tente novamente.\n");
        }
    } while (chute < 'A' || chute > 'Z');

    if (strchr(chutes, chute) != NULL) {
        printf("Você já chutou essa letra. Tente novamente.\n");
    } else {
        chutes[chutesdados] = chute;
        chutesdados++;

        if (strchr(palavrasecreta, chute) != NULL) {
            printf("Você acertou: a palavra tem a letra %c\n\n", chute);
        } else {
            printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", chute);
        }
    }
}

int jachutou(char letra) {
    for (int j = 0; j < chutesdados; j++) {
        if (chutes[j] == letra) {
            return 1;
        }
    }
    return 0;
}

int chuteserrados() {
    int erros = 0;
    for (int i = 0; i < chutesdados; i++) {
        if (!jachutou(chutes[i])) {
            erros++;
        }
    }
    return erros;
}

int enforcou() {
    return chuteserrados() >= 5;
}

int ganhou() {
    for (int i = 0; i < strlen(palavrasecreta); i++) {
        if (!jachutou(palavrasecreta[i])) {
            return 0;
        }
    }
    return 1;
}

void desenhaforca() {
    // (Código da forca permanece o mesmo)
}

void escolhepalavra() {
    FILE *f;
    f = fopen("palavras.txt", "r");
    if (f == NULL) {
        printf("Banco de dados de palavras não disponível\n\n");
        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for (int i = 0; i <= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}

void adicionapalavra() {
    char quer;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)? ");
    scanf(" %c", &quer);

    if (quer == 'S' && ganhou()) {
        char novapalavra[TAMANHO_PALAVRA];

        printf("Digite a nova palavra, em letras maiúsculas: ");
        scanf("%s", novapalavra);

        FILE *f;
        f = fopen("palavras.txt", "r+");
        if (f == NULL) {
            printf("Banco de dados de palavras não disponível\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);

        // Verifica se a palavra já existe no banco de palavras
        int palavra_existente = 0;
        for (int i = 0; i < qtd; i++) {
            char palavra_existente_atual[TAMANHO_PALAVRA];
            fscanf(f, "%s", palavra_existente_atual);
            if (strcmp(palavra_existente_atual, novapalavra) == 0) {
                palavra_existente = 1;
                break;
            }
        }

        if (!palavra_existente) {
            fseek(f, 0, SEEK_SET);
            fprintf(f, "%d", qtd + 1);

            fseek(f, 0, SEEK_END);
            fprintf(f, "\n%s", novapalavra);

            printf("Palavra adicionada com sucesso!\n");
        } else {
            printf("Essa palavra já existe. Escolha outra.\n");
        }

        fclose(f);
    }
}

void salvarRanking(int pontuacao) {
    char nome[50];
    printf("Parabéns! Você ganhou!\n");
    printf("Digite seu nome para o ranking: ");
    scanf("%s", nome);

    FILE *ranking = fopen("ranking.txt", "a");
    if (ranking == NULL) {
        printf("Erro ao abrir o arquivo de ranking.\n");
        exit(1);
    }

    fprintf(ranking, "%s %d\n", nome, pontuacao);
    fclose(ranking);
}

int main() {
    abertura();
    escolhepalavra();
    solicitaNivel();

    int max_chutes = 6 - nivel;

    do {
        desenhaforca();
        chuta();
    } while (!ganhou() && !enforcou() && chutesdados < max_chutes);

    if (ganhou()) {
        printf("\nParabéns, você ganhou!\n\n");
        salvarRanking(chutesdados);
    } else {
        printf("\nPuxa, você foi enforcado!\n");
        printf("A palavra era **%s**\n\n", palavrasecreta);
    }

    adicionapalavra();

    return 0;
}