#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Anamnese {
    char nome[50];
    int idade;
    char historico[100];
};

int main() {
    int numRegistros;

    printf("Digite o numero de registros de Anamnese a serem cadastrados: ");
    scanf("%d", &numRegistros);

    struct Anamnese* registros = (struct Anamnese*)malloc(numRegistros * sizeof(struct Anamnese));

    for (int i = 0; i < numRegistros; i++) {
        fflush(stdin); 
        printf("Registro #%d\n", i + 1);
        printf("Nome: ");
        fgets(registros[i].nome, sizeof(registros[i].nome), stdin);
        printf("Idade: ");
        scanf("%d", &registros[i].idade);
        fflush(stdin); 
        printf("Historico: ");
        fgets(registros[i].historico, sizeof(registros[i].historico), stdin);
        printf("\n");
    }


    printf("Registros de Anamnese cadastrados:\n");
    for (int i = 0; i < numRegistros; i++) {
        printf("Registro #%d\n", i + 1);
        printf("Nome: %s", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("Historico: %s", registros[i].historico);
        printf("\n");
    }

    free(registros);

    return 0;
}
