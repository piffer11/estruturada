#include <stdio.h>

#define TAM 10

int main() {
    int A[TAM], B[TAM], C[TAM];
    int i;

    printf("Digite %d numeros inteiros para o vetor A:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite %d numeros inteiros para o vetor B:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &B[i]);
    }
    
    for(i = 0; i < TAM; i++) {
        C[i] = A[i] - B[i];
    }
    
    printf("Vetor C:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
