#include <stdio.h>

int main() {
    int array[5];
    int i;

    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Impressão do dobro de cada valor
    printf("O dobro de cada valor lido:\n");
    for (i = 0; i < 5; i++) {
        int* ptr = &array[i];
        printf("%d\n", (*ptr) * 2);
    }

    return 0;
}
