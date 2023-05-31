#include <stdio.h>

void retorna_maior_menor(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    retorna_maior_menor(&valor1, &valor2);

    printf("Maior valor: %d\n", valor2);
    printf("Menor valor: %d\n", valor1);

    return 0;
}
