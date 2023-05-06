#include <stdio.h>

int main() {
    int vetor[20];
    int i, j;

    for(i = 0; i < 20; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
   
    for(i = 0; i < 20; i++) {
        if(vetor[i] == -1) {
            continue;
        }
        for(j = i+1; j < 20; j++) {
            if(vetor[i] == vetor[j]) {
                vetor[j] = -1;
            }
        }
    }

    printf(" numeros que nao tiveram seu valor repetido: ");
    for(i = 0; i < 20; i++) {
        if(vetor[i] != -1) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
