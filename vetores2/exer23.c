#include <stdio.h>

#define TAM 5

int main() {
    float vetor1[TAM], vetor2[TAM];
    int i;
    float produto_escalar = 0.0;

    
    printf("Digite %d numeros reais para o primeiro vetor:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%f", &vetor1[i]);
    }

    printf("Digite %d numeros reais para o segundo vetor:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%f", &vetor2[i]);
    }

    
    for(i = 0; i < TAM; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("Vetor 1:\n");
    for(i = 0; i < TAM; i++) {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2:\n");
    for(i = 0; i < TAM; i++) {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2f\n", produto_escalar);

    return 0;
}
