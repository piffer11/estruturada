#include<stdio.h>
main(){
    int vetor[8];
    int x, y, soma =0;

    for (int indice = 0; indice < 8; indice++)
    {
        printf("Digite o valor:");
        scanf("%d",&vetor[indice]);
    }
    
    printf("Digite os indices que deseja visualizar:");
    scanf("%d %d", &x, &y);
    
    for (int indice = 0; indice < 8; indice++){
        if (x==indice)
        {
            printf("%d", vetor[indice]);
            soma += vetor[indice];
        }if (y==indice)
        {
            printf("%d", vetor[indice]);
            soma += vetor[indice];
        }
        
        
    }
    
    



    return 0;
}
