#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char nome[50];
    int quantidade;
    float  preco;
} Produto;

typedef struct {
    Produto *produtos;
    int tamanho;
} Estoque;

void comecarestoque(Estoque *estoque) {
    estoque->produtos = NULL;
    estoque->tamanho = 0;
}

void colocarproduto(Estoque *estoque) {
    Produto produto;

    printf("Digite o numero do produto: ");
    scanf("%d", &produto.numero);

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto.nome);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    printf("Digite o preco do produto: ");
    scanf("%f", &produto.preco);

    estoque->tamanho++;
    estoque->produtos = (Produto*) realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));
    estoque->produtos[estoque->tamanho - 1] = produto;

    printf("Produto adicionado com exito\n");
}

void imprimirRelatorio(Estoque estoque) {
    printf("Relatorio de Produtos:\n");

    for (int i = 0; i < estoque.tamanho; i++) {
        printf("Codigo: %d\n", estoque.produtos[i].numero);
        printf("Descricao: %s\n", estoque.produtos[i].nome);
        printf("Quantidade: %d\n", estoque.produtos[i].quantidade);
        printf("Preco: %.2f\n", estoque.produtos[i].preco);
        printf("----------------------------\n");
    }
}

void procurarProduto(Estoque estoque) {
    int numero;
    int encontrado = 0;

    printf("Digite o numero do produto: ");
    scanf("%d", &numero);

    for (int i = 0; i < estoque.tamanho; i++) {
        if (estoque.produtos[i].numero == numero) {
            printf("Produto encontrado:\n");
            printf("numero: %d\n", estoque.produtos[i].numero);
            printf("Nome: %s\n", estoque.produtos[i].nome);
            printf("Quantidade: %d\n", estoque.produtos[i].quantidade);
            printf("Preco: %.2f\n", estoque.produtos[i].preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado.\n");
    }
}

void retirarProduto(Estoque *estoque) {
    int numero;
    int encontrado = 0;

    printf("Digite o numero do produto a ser retirado: ");
    scanf("%d", &numero);

    for (int i = 0; i < estoque->tamanho; i++) {
        if (estoque->produtos[i].numero == numero) {
            encontrado = 1;

            for (int j = i; j < estoque->tamanho - 1; j++) {
                estoque->produtos[j] = estoque->produtos[j + 1];
            }

            estoque->tamanho--;
            estoque->produtos = (Produto*) realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));

            printf("Produto removido com exito\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado.\n");
    }
}

int main() {
    Estoque estoque;
    int opcao;

    comecarestoque(&estoque);

    do {
        printf("\n=== Lojinha Piffer ===\n");
        printf("1. Adicionar Produto\n");
        printf("2. Imprimir Relatorio\n");
        printf("3. Procurar Produto\n");
        printf("4. Retirar  Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
               colocarproduto(&estoque);
                break;
            case 2:
                imprimirRelatorio(estoque);
                break;
            case 3:
                procurarProduto(estoque);
                break;
            case 4:
                retirarProduto(&estoque);
                break;
            case 0:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    free(estoque.produtos);

    return 0;
}
