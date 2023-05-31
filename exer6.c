#include <stdio.h>

void imprimirArray(int *array, int tamanho) {
    int *ptr = array;
    int *final = array + tamanho;

    while (ptr < final) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    imprimirArray(array, tamanho);

    return 0;
}
