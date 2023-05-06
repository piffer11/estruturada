#include <stdio.h>

#define TAM 10

int main() {
    int numero[TAM];
    float altura[TAM];
    int i, indicemaisbaixo = 0, indicemaisalto = 0;

    for(i = 0; i < TAM; i++) {
        printf("Digite o numero e a altura do aluno %d: ", i+1);
        scanf("%d %f", &numero[i], &altura[i]);
    }


    for(i = 1; i < TAM; i++) {
        if(altura[i] < altura[indicemaisbaixo]) {
            indicemaisbaixo = i;
        }
        if(altura[i] > altura[indicemaisalto]) {
            indicemaisalto = i;
        }
    }

    // Impressão dos resultados
    printf("Aluno mais baixo:\n");
    printf("Numero: %d\n", numero[indicemaisbaixo]);
    printf("Altura: %.2f\n", altura[indicemaisbaixo]);

    printf("Aluno mais alto:\n");
    printf("Numero: %d\n", numero[indicemaisalto]);
    printf("Altura: %.2f\n", altura[indicemaisalto]);

    return 0;
}
