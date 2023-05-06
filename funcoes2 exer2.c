#include <stdio.h>

void imprimirTabelaASCII() {
    int i;
    printf("Codigo decimal | Codigo hexadecimal | Caracter\n");
    for (i = 0; i <= 127; i++) {
        printf("%-14d | %-18X | %-1c\n", i, i, i);
    }
}

int main() {
    imprimirTabelaASCII();
    return 0;
}
