#include <stdio.h>

int main() {
    float valores[5];
    float maior, menor, soma = 0.0;
    int i;

   
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &valores[i]);
    }

   
    printf("\nValores digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", valores[i]);
        soma += valores[i];
    }

    
    maior = menor = valores[0];
    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
}
    }
}