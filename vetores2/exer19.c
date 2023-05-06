#include <stdio.h>

#define TAM 50

int main() {
    int vetor[TAM];
    int i;

    for(i = 0; i < TAM; i++) {
        vetor[i] = (i + 5*i) % (i+1);
    }
    
    printf("Vetor:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
