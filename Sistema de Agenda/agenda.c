#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados do cadastro
struct Cadastro {
    char nome[50];
    char endereco[100];
    char bairro[50];
    char cidade[50];
    char estado[3];
    char cep[10];
    char telefone[15];
    char celular[15];
};

// Função para adicionar um novo cadastro
void adicionarCadastro(FILE *arquivo, struct Cadastro *novoCadastro) {
    printf("Nome: ");
    scanf(" %[^\n]s", novoCadastro->nome);

    printf("Endereco: ");
    scanf(" %[^\n]s", novoCadastro->endereco);

    printf("Bairro: ");
    scanf(" %[^\n]s", novoCadastro->bairro);

    printf("Cidade: ");
    scanf(" %[^\n]s", novoCadastro->cidade);

    printf("Estado: ");
    scanf(" %[^\n]s", novoCadastro->estado);

    printf("CEP: ");
    scanf("%s", novoCadastro->cep);

    printf("Telefone: ");
    scanf("%s", novoCadastro->telefone);

    printf("Celular: ");
    scanf("%s", novoCadastro->celular);

    // Escrever os dados no arquivo
    fprintf(arquivo, "%s;%s;%s;%s;%s;%s;%s;%s\n",
            novoCadastro->nome, novoCadastro->endereco, novoCadastro->bairro,
            novoCadastro->cidade, novoCadastro->estado, novoCadastro->cep,
            novoCadastro->telefone, novoCadastro->celular);

    printf("Cadastro adicionado com sucesso!\n");
}

// Função para exibir todos os cadastros
void exibirCadastros(FILE *arquivo) {
    fseek(arquivo, 0, SEEK_SET); // Reposiciona o ponteiro no início do arquivo

    printf("\nLista de Cadastros:\n");
    printf("Nome | Endereco | Bairro | Cidade | Estado | CEP | Telefone | Celular\n");

    struct Cadastro tempCadastro;
    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
                  tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
                  tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
                  tempCadastro.telefone, tempCadastro.celular) != EOF) {
        printf("%s | %s | %s | %s | %s | %s | %s | %s\n",
               tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
               tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
               tempCadastro.telefone, tempCadastro.celular);
    }
}

// Função para buscar um cadastro por nome, cidade ou estado
void consultarCadastro(FILE *arquivo) {
    fseek(arquivo, 0, SEEK_SET);

    char termo[50];
    printf("Digite o nome, cidade ou estado para a consulta: ");
    scanf(" %[^\n]s", termo);

    struct Cadastro tempCadastro;
    int encontrado = 0;

    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
                  tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
                  tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
                  tempCadastro.telefone, tempCadastro.celular) != EOF) {
        // Verifica se o termo de busca está presente no nome, cidade ou estado
        if (strstr(tempCadastro.nome, termo) || strstr(tempCadastro.cidade, termo) ||
            strstr(tempCadastro.estado, termo)) {
            printf("%s | %s | %s | %s | %s | %s | %s | %s\n",
                   tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
                   tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
                   tempCadastro.telefone, tempCadastro.celular);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum cadastro encontrado com o termo '%s'.\n", termo);
    }
}

// Função para deletar um cadastro
void deletarCadastro(FILE *arquivo) {
    // Crie uma cópia temporária do arquivo
    FILE *tempFile = fopen("temp.txt", "w");
    fseek(arquivo, 0, SEEK_SET);

    char termo[50];
    printf("Digite o nome, cidade ou estado para a exclusao: ");
    scanf(" %[^\n]s", termo);

    struct Cadastro tempCadastro;
    int encontrado = 0;

    while (fscanf(arquivo, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
                  tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
                  tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
                  tempCadastro.telefone, tempCadastro.celular) != EOF) {
        // Se o termo de busca não for encontrado, escreva no arquivo temporário
        if (!(strstr(tempCadastro.nome, termo) || strstr(tempCadastro.cidade, termo) ||
              strstr(tempCadastro.estado, termo))) {
            fprintf(tempFile, "%s;%s;%s;%s;%s;%s;%s;%s\n",
                    tempCadastro.nome, tempCadastro.endereco, tempCadastro.bairro,
                    tempCadastro.cidade, tempCadastro.estado, tempCadastro.cep,
                    tempCadastro.telefone, tempCadastro.celular);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(tempFile);

    // Substitua o arquivo original pelo temporário
    remove("cadastros.txt");
    rename("temp.txt", "cadastros.txt");

    if (encontrado) {
        printf("Cadastro excluido com sucesso.\n");
    } else {
        printf("Nenhum cadastro encontrado com o termo '%s'.\n", termo);
    }

    // Reabra o arquivo para futuras operações
    arquivo = fopen("cadastros.txt", "a+");
}

int main() {
    FILE *arquivo = fopen("cadastros.txt", "a+"); // Abre o arquivo para leitura e escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int opcao;

    do {
        // Menu de opções
        printf("\nMenu:\n");
        printf("1. Inserir Cadastro\n");
        printf("2. Consultar Cadastros\n");
        printf("3. Pesquisar por Nome, Cidade ou Estado\n");
        printf("4. Deletar Cadastro\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                struct Cadastro novoCadastro;
                adicionarCadastro(arquivo, &novoCadastro);
                break;
            }
            case 2:
                exibirCadastros(arquivo);
                break;
            case 3:
                consultarCadastro(arquivo);
                break;
            case 4:
                deletarCadastro(arquivo);
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    fclose(arquivo); // Fecha o arquivo ao encerrar o programa

    return 0;
}