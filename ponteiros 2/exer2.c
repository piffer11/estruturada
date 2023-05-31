#include <stdio.h>

int retorna_soma_dobro(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
    return (*a + *b);
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int soma_dobro = retorna_soma_dobro(&valor1, &valor2);

    printf("A soma do dobro dos valores e: %d\n", soma_dobro);
    printf("Valor 1 (dobro): %d\n", valor1);
    printf("Valor 2 (dobro): %d\n", valor2);

    return 0;
}
