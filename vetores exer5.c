#include<stdio.h>
main(){
    int vetor[5];
    int pares = 0;

    for (int indice = 0; indice < 5; indice++)
    {
      printf("Digite o valor :\n");
      scanf("%d", &vetor[indice]);
    
    }
    for (int indice = 0; indice < 5; indice++)
    {
        if (vetor[indice] % 2 == 0){
            pares += 1;
        }
    }

    printf("a quantidade de numeros pares e %d:", pares);
}
