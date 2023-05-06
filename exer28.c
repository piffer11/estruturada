#include <stdio.h>

#define TAM 10

int main() {
    int v[TAM], v1[TAM/2], v2[TAM/2];
    int i, j = 0, k = 0;

    printf("Digite %d numeros inteiros:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < TAM; i++) {
        if(v[i] % 2 != 0) {
            v1[j] = v[i];
            j++;
        } else {
            v2[k] = v[i];
            k++;
        }
    }

    printf("Elementos utilizados de v1:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Elementos utilizados de v2:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
