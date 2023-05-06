#include <stdio.h>
int ePrimo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numeros[10], i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    
    printf("Numeros primos e suas posicoes:\n");
    for (i = 0; i < 10; i++) {
        if (ehPrimo(numeros[i])) {
            printf("%d na posicao %d\n", numeros[i], i);
        }
    }

    return 0;
}
