#include <stdio.h>
#include <stdlib.h>

typedef struct Restaurante {
    char nome[100];
    char endereco[100];
    float precoMedio;
    char comidaservida[100];
    struct Restaurante* proximo;
} Restaurante;

Restaurante* solicitarDados() {
    Restaurante* novoRestaurante = (Restaurante*)malloc(sizeof(Restaurante));

    printf("Nome do restaurante: ");
    scanf(" %[^\n]", novoRestaurante->nome);

    printf("Endereco do restaurante: ");
    scanf(" %[^\n]", novoRestaurante->endereco);

    printf("Preco medio: ");
    scanf("%f", &novoRestaurante->precoMedio);

    printf("Tipo de comida: ");
    scanf(" %[^\n]", novoRestaurante->comidaservida);

    novoRestaurante->proximo = NULL;

    return novoRestaurante;
}

void listadeRestaurantes(Restaurante* lista) {
    Restaurante* atual = lista;
    if (atual == NULL) {
        printf("Nao tem nenhum restaurante registrado.\n");
    } else {
        while (atual != NULL) {
            printf("Nome: %s\n", atual->nome);
            printf("Endereco: %s\n", atual->endereco);
            printf("Preco medio: %.2f\n", atual->precoMedio);
            printf("Tipo de comida: %s\n", atual->comidaservida);
            printf("\n");

            atual = atual->proximo;
        }
    }
}

 main() {
    Restaurante* listaRestaurantes = NULL;

    int opcao;

    do {
        printf("-- Escolha uma opcao: --\n");
        printf("1 -- Adicionar um novo restaurante \t\n");
        printf("2 -- Lista de todos restaurantes \t\n");
        printf("0 -- Sair \t\n");
        printf("Dgite a Opcao que deseja ralizar : ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Restaurante* novoRestaurante = solicitarDados();

                if (listaRestaurantes == NULL) {
                    listaRestaurantes = novoRestaurante;
                } else {
                    Restaurante* atual = listaRestaurantes;

                    while (atual->proximo != NULL) {
                        atual = atual->proximo;
                    }

                    atual->proximo = novoRestaurante;
                }

                printf("Restaurante novo adicionado com sucesso.\n\n");
                break;
            }
            case 2: {
                listadeRestaurantes(listaRestaurantes);
                break;
            }
            case 0: {
                printf("Finalizando.....\n");
                break;
            }
            default: {
                printf("Opcao inexistente.\n");
                break;
            }
        }
    } while (opcao != 0);


}
