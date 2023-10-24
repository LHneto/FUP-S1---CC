#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo constantes para a quantidade de tentativas por nível
#define TENTATIVAS_FACIL 20
#define TENTATIVAS_MEDIO 15
#define TENTATIVAS_DIFICIL 6

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    double pontos = 1000;
    int limite_inferior, limite_superior;
    int ultimoChute = -1;
    int jogarNovamente = 1;

    while (jogarNovamente == 1) {
        printf("Escolha o limite inferior para o número secreto: ");
        scanf("%d", &limite_inferior);

        printf("Escolha o limite superior para o número secreto: ");
        scanf("%d", &limite_superior);

        srand(time(0));
        int numerosecreto = (rand() % (limite_superior - limite_inferior + 1)) + limite_inferior;

        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);

        switch (nivel) {
            case 1:
                totaldetentativas = TENTATIVAS_FACIL;
                break;
            case 2:
                totaldetentativas = TENTATIVAS_MEDIO;
                break;
            default:
                totaldetentativas = TENTATIVAS_DIFICIL;
                break;
        }

        for (int i = 1; i <= totaldetentativas; i++) {
            printf("-> Tentativa %d de %d\n", i, totaldetentativas);
            printf("Chute um número entre %d e %d: ", limite_inferior, limite_superior);
            scanf("%d", &chute);

            if (chute < limite_inferior || chute > limite_superior) {
                printf("Seu chute está fora do limite! Tente novamente.\n");
                i--;
                continue;
            }

            if (chute == ultimoChute) {
                printf("Você já chutou esse número. Tente novamente.\n");
                i--;
                continue;
            }

            ultimoChute = chute;

            acertou = chute == numerosecreto;

            if (acertou) {
                break;
            } else if (chute > numerosecreto) {
                printf("\nSeu chute foi maior do que o número secreto!\n\n");
            } else {
                printf("\nSeu chute foi menor do que o número secreto!\n\n");
            }

            double pontosperdidos = abs(chute - numerosecreto) / 2.0;
            pontos = pontos - pontosperdidos;
        }

        printf("\n");
        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
        } else {
            printf("Você perdeu! Tente novamente!\n\n");
        }

        printf("Deseja jogar novamente? (1 para sim, 0 para não): ");
        scanf("%d", &jogarNovamente);
    }

    return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo constantes para a quantidade de tentativas por nível
#define TENTATIVAS_FACIL 20
#define TENTATIVAS_MEDIO 15
#define TENTATIVAS_DIFICIL 6

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    double pontos = 1000;
    int limite_inferior, limite_superior;
    int ultimoChute = -1;
    int jogarNovamente = 1;

    while (jogarNovamente == 1) {
        printf("Escolha o limite inferior para o número secreto: ");
        scanf("%d", &limite_inferior);

        printf("Escolha o limite superior para o número secreto: ");
        scanf("%d", &limite_superior);

        srand(time(0));
        int numerosecreto = (rand() % (limite_superior - limite_inferior + 1)) + limite_inferior;

        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);

        switch (nivel) {
            case 1:
                totaldetentativas = TENTATIVAS_FACIL;
                break;
            case 2:
                totaldetentativas = TENTATIVAS_MEDIO;
                break;
            default:
                totaldetentativas = TENTATIVAS_DIFICIL;
                break;
        }

        for (int i = 1; i <= totaldetentativas; i++) {
            printf("-> Tentativa %d de %d\n", i, totaldetentativas);
            printf("Chute um número entre %d e %d: ", limite_inferior, limite_superior);
            scanf("%d", &chute);

            if (chute < limite_inferior || chute > limite_superior) {
                printf("Seu chute está fora do limite! Tente novamente.\n");
                i--;
                continue;
            }

            if (chute == ultimoChute) {
                printf("Você já chutou esse número. Tente novamente.\n");
                i--;
                continue;
            }

            ultimoChute = chute;

            acertou = chute == numerosecreto;

            if (acertou) {
                break;
            } else if (chute > numerosecreto) {
                printf("\nSeu chute foi maior do que o número secreto!\n\n");
            } else {
                printf("\nSeu chute foi menor do que o número secreto!\n\n");
            }

            double pontosperdidos = abs(chute - numerosecreto) / 2.0;
            pontos = pontos - pontosperdidos;
        }

        printf("\n");
        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
        } else {
            printf("Você perdeu! Tente novamente!\n\n");
        }

        printf("Deseja jogar novamente? (1 para sim, 0 para não): ");
        scanf("%d", &jogarNovamente);
    }

    return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo constantes para a quantidade de tentativas por nível
#define TENTATIVAS_FACIL 20
#define TENTATIVAS_MEDIO 15
#define TENTATIVAS_DIFICIL 6

int main() {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    double pontos = 1000;
    int limite_inferior, limite_superior;
    int ultimoChute = -1;
    int jogarNovamente = 1;

    while (jogarNovamente == 1) {
        printf("Escolha o limite inferior para o número secreto: ");
        scanf("%d", &limite_inferior);

        printf("Escolha o limite superior para o número secreto: ");
        scanf("%d", &limite_superior);

        srand(time(0));
        int numerosecreto = (rand() % (limite_superior - limite_inferior + 1)) + limite_inferior;

        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);

        switch (nivel) {
            case 1:
                totaldetentativas = TENTATIVAS_FACIL;
                break;
            case 2:
                totaldetentativas = TENTATIVAS_MEDIO;
                break;
            default:
                totaldetentativas = TENTATIVAS_DIFICIL;
                break;
        }

        for (int i = 1; i <= totaldetentativas; i++) {
            printf("-> Tentativa %d de %d\n", i, totaldetentativas);
            printf("Chute um número entre %d e %d: ", limite_inferior, limite_superior);
            scanf("%d", &chute);

            if (chute < limite_inferior || chute > limite_superior) {
                printf("Seu chute está fora do limite! Tente novamente.\n");
                i--;
                continue;
            }

            if (chute == ultimoChute) {
                printf("Você já chutou esse número. Tente novamente.\n");
                i--;
                continue;
            }

            ultimoChute = chute;

            acertou = chute == numerosecreto;

            if (acertou) {
                break;
            } else if (chute > numerosecreto) {
                printf("\nSeu chute foi maior do que o número secreto!\n\n");
            } else {
                printf("\nSeu chute foi menor do que o número secreto!\n\n");
            }

            double pontosperdidos = abs(chute - numerosecreto) / 2.0;
            pontos = pontos - pontosperdidos;
        }

        printf("\n");
        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
        } else {
            printf("Você perdeu! Tente novamente!\n\n");
        }

        printf("Deseja jogar novamente? (1 para sim, 0 para não): ");
        scanf("%d", &jogarNovamente);
    }

    return 0;
}
