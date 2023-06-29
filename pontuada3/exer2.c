#include <stdio.h>
#include <stdlib.h>

typedef struct Dieta {
    char comida[100];
    float peso;
    int calorias;
    struct Dieta* proximo;
} Dieta;

Dieta* solicitarDados() {
    Dieta* novaComida = (Dieta*)malloc(sizeof(Dieta));

    printf("Nome da comida: ");
    scanf(" %[^\n]", novaComida->comida);

    printf("Peso da comida: ");
    scanf("%f", &novaComida->peso);

    printf("Quantidade de calorias: ");
    scanf("%d", &novaComida->calorias);

    novaComida->proximo = NULL;

    return novaComida;
}

void listadecomidas(Dieta* lista) {
    Dieta* atual = lista;

    if (atual == NULL) {
        printf("Nenhuma comida foi registrada.\n");
    } else {
        while (atual != NULL) {
            printf("Nome da comida: %s\n", atual->comida);
            printf("Peso da comida: %.2f\n", atual->peso);
            printf("Quantidade de calorias: %d\n", atual->calorias);
            printf("\n");

            atual = atual->proximo;
        }
    }
}

 main() {
    Dieta* listaComidas = NULL;

    int opcao;

    do {
        printf("-- Escolha uma opcao: --\n");
        printf("1 -- Adicionar uma comida --\n");
        printf("2 -- Listar todas as comidas --\n");
        printf("0 -- Sair --\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Dieta* novaComida = solicitarDados();

                if (listaComidas == NULL) {
                    listaComidas = novaComida;
                } else {
                    Dieta* atual = listaComidas;

                    while (atual->proximo != NULL) {
                        atual = atual->proximo;
                    }

                    atual->proximo = novaComida;
                }

                printf("Comida adicionada com sucesso.\n\n");
                break;
            }
            case 2: {
                listadecomidas(listaComidas);
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
