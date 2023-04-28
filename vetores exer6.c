#include<stdio.h>
main(){
    int vetor [10];
    int maior, menor;

    for (int indice = 0; indice < 10; indice++)
    {
        printf("digite o numero:" );
        scanf("%d", &vetor[indice]);}

        maior = menor = vetor[0];

    for (int indice = 1; indice < 10; indice++) {
        
        if (vetor[indice] > maior) {
            maior = vetor[indice];
        }
        if (vetor[indice] < menor) {
            menor = vetor[indice];
        }
    }

    printf("O maior valor digitado e: %d\n", maior);
    printf("O menor valor digitado e: %d\n", menor);


    }
    
