#include <stdio.h>

main() {
    float numeros[10];
    int i, negativos = 0;
    float soma_positivos = 0.0;

   
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &numeros[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            negativos++;
        } else {
            soma_positivos += numeros[i];
        }
    }

    
    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

}