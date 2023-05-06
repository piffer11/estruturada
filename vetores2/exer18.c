#include <stdio.h>

int main() {
    int vetor[10];
    int x, i, count = 0;

    printf("Digite os valores do vetor:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero inteiro x: ");
    scanf("%d", &x);

    for(i = 0; i < 10; i++) {
        if(vetor[i] % x == 0) {
            count++;
        }
    }

    printf("O vetor tem %d multiplos de %d.\n", count, x);

    return 0;
}
