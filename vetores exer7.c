#include <stdio.h>

int main() {
    int vetor[10];
    int maior = vetor[0];
    int posicao = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior) { 
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Vetor: [ ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    printf("Maior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicao);

    return 0;
}
