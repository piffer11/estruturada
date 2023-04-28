#include <stdio.h>

 main() {
    int numeros[6];
    int i;
    
    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");


}