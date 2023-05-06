#include <stdio.h>

#define TAM 100

int main() {
    int vetor[TAM];
    int i = 0, num = 7;

    while(i < TAM) {
        if(num % 7 != 0 && num % 10 == 7) {
            vetor[i] = num;
            i++;
        }
        num++;
    }

    printf("Vetor preenchido com os 100 primeiros naturais que nao sao multiplos de 7 e terminam com 7:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
