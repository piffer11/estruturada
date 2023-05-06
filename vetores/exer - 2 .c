#include<stdio.h>

int main(){
    int vetor[6];

    for (int indice = 0; indice <6; indice++)
    {
       printf("Digite um numero: ");
       scanf("%d", &vetor[indice]);
    }
    for (int indice = 0; indice < 6; indice++)
    {
        printf("%d`\n", vetor[indice]);
    }
    

    return 0;
}
