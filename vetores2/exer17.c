#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    
    printf("Vetor resultante: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
