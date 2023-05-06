#include <stdio.h>
main() {
    int numeros[6];
    int i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor %d (par): ", i+1);
            scanf("%d", &numeros[i]);
        } while (numeros[i] % 2 != 0);
    }

    
    printf("Valores na ordem inversa: ");
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}
