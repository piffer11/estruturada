#include <stdio.h>

#define TAM 10

int main() {
    int vetor1[TAM], vetor2[TAM/2];
    int i, j = 0;
   
    printf("Digite %d numeros inteiros no intervalo de [0,5]:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < TAM; i++) {
        if(vetor1[i] % 2 != 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    printf("Vetor 1:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor1[i]);
        if((i+1) % 2 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    printf("Vetor 2:\n");
    for(i = 0; i < TAM/2; i++) {
        printf("%d ", vetor2[i]);
        if((i+1) % 2 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
