#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int iguais[10];
    int num_iguais = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 9; i++) {
        for(j = i+1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                int k;
                for(k = 0; k < num_iguais; k++) {
                    if(vetor[i] == iguais[k]) {
                        break;
                    }
                }
                if(k == num_iguais) {
                    iguais[num_iguais] = vetor[i];
                    num_iguais++;
                }
            }
        }
    }
    if(num_iguais > 0) {
        printf("Os seguintes valores se repetem: ");
        for(i = 0; i < num_iguais; i++) {
            printf("%d ", iguais[i]);
        }
    } else {
        printf("Nao ha valores repetidos.");
    }

    return 0;
}
