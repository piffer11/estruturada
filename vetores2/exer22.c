#include <stdio.h>

#define TAM 10

int main() {
    int vetor1[TAM], vetor2[TAM];
    int i;

    printf("Digite %d numeros inteiros para o vetor 1:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite %d numeros inteiros para o vetor 2:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Valores intercalados:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor1[i]);
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}
