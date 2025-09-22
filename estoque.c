#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

void menu();
void adicionarProduto();
void listarProdutos();
void buscarProduto();
void excluirProduto();
void atualizarProduto();
void limparBuffer();

int main() {
    int opcao;
    do {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                atualizarProduto();
                break;
            case 6:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}

void menu() {
    printf("\n--- TAREFA PROGAMADOR DE SISTEMAS ---\n");
    printf("\n---        SISTEMA ESTOQUE        ---\n");
    printf("\n-------------------------------------\n");
    printf("1. Adicionar produto\n");
    printf("2. Listar todos os produtos\n");
    printf("3. Buscar produto por codigo\n");
    printf("4. Excluir produto por codigo\n");
    printf("5. Atualizar produto por codigo\n");
    printf("6. Sair\n");
    printf("\n-------------------------------------\n");
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


void adicionarProduto() {
    FILE *arquivo;
    struct Produto produto;

    arquivo = fopen("estoque.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("\n--- Adicionar Produto ---\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &produto.codigo);
    limparBuffer();
    printf("Digite o nome do produto: ");
    fgets(produto.nome, sizeof(produto.nome), stdin);
    produto.nome[strcspn(produto.nome, "\n")] = 0;
    printf("Digite a quantidade: ");
    scanf("%d", &produto.quantidade);
    printf("Digite o preco: ");
    scanf("%f", &produto.preco);

    fprintf(arquivo, "%d %s %d %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
    printf("Produto adicionado com sucesso!\n");

    fclose(arquivo);
}

void listarProdutos() {
    FILE *arquivo;
    struct Produto produto;

    arquivo = fopen("estoque.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n--- Produtos em Estoque ---\n");
    while (fscanf(arquivo, "%d %s %d %f", &produto.codigo, produto.nome, &produto.quantidade, &produto.preco) != EOF) {
        printf("Codigo: %d, Nome: %s, Quantidade: %d, Preco: %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
    }

    fclose(arquivo);
}

void buscarProduto() {
    FILE *arquivo;
    struct Produto produto;
    int codigoBusca;
    int encontrado = 0;

    arquivo = fopen("estoque.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n--- Buscar Produto ---\n");
    printf("Digite o codigo do produto para buscar: ");
    scanf("%d", &codigoBusca);

    while (fscanf(arquivo, "%d %s %d %f", &produto.codigo, produto.nome, &produto.quantidade, &produto.preco) != EOF) {
        if (produto.codigo == codigoBusca) {
            printf("\nProduto encontrado:\n");
            printf("Codigo: %d, Nome: %s, Quantidade: %d, Preco: %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com codigo %d nao encontrado.\n", codigoBusca);
    }

    fclose(arquivo);
}

void excluirProduto() {
    FILE *arquivo, *temp;
    struct Produto produto;
    int codigoExcluir;
    int encontrado = 0;

    arquivo = fopen("estoque.txt", "r");
    temp = fopen("temp.txt", "w");
    if (arquivo == NULL) {
        printf("Nenhum produto cadastrado.\n");
        fclose(temp);
        return;
    }

    printf("\n--- Excluir Produto ---\n");
    printf("Digite o codigo do produto para excluir: ");
    scanf("%d", &codigoExcluir);

    while (fscanf(arquivo, "%d %s %d %f", &produto.codigo, produto.nome, &produto.quantidade, &produto.preco) != EOF) {
        if (produto.codigo == codigoExcluir) {
            encontrado = 1;
        } else {
            fprintf(temp, "%d %s %d %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
        }
    }

    fclose(arquivo);
    fclose(temp);

    if (encontrado) {
        remove("estoque.txt");
        rename("temp.txt", "estoque.txt");
        printf("Produto com codigo %d excluido com sucesso.\n", codigoExcluir);
    } else {
        remove("temp.txt");
        printf("Produto com codigo %d nao encontrado.\n", codigoExcluir);
    }
}

void atualizarProduto() {
    FILE *arquivo, *temp;
    struct Produto produto;
    int codigoAtualizar;
    int encontrado = 0;

    arquivo = fopen("estoque.txt", "r");
    temp = fopen("temp.txt", "w");
    if (arquivo == NULL) {
        printf("Nenhum produto cadastrado.\n");
        fclose(temp);
        return;
    }

    printf("\n--- Atualizar Produto ---\n");
    printf("Digite o codigo do produto para atualizar: ");
    scanf("%d", &codigoAtualizar);

    while (fscanf(arquivo, "%d %s %d %f", &produto.codigo, produto.nome, &produto.quantidade, &produto.preco) != EOF) {
        if (produto.codigo == codigoAtualizar) {
            printf("Produto encontrado. Digite os novos dados:\n");
            printf("Novo nome: ");
            limparBuffer();
            fgets(produto.nome, sizeof(produto.nome), stdin);
            produto.nome[strcspn(produto.nome, "\n")] = 0;
            printf("Nova quantidade: ");
            scanf("%d", &produto.quantidade);
            printf("Novo preco: ");
            scanf("%f", &produto.preco);
            fprintf(temp, "%d %s %d %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
            encontrado = 1;
            printf("Produto atualizado com sucesso!\n");
        } else {
            fprintf(temp, "%d %s %d %.2f\n", produto.codigo, produto.nome, produto.quantidade, produto.preco);
        }
    }

    fclose(arquivo);
    fclose(temp);

    if (encontrado) {
        remove("estoque.txt");
        rename("temp.txt", "estoque.txt");
    } else {
        remove("temp.txt");
        printf("Produto com codigo %d nao encontrado.\n", codigoAtualizar);
    }
}