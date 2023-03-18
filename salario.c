#include<stdio.h>
main(){
    int atual, reajuste, novo;
    printf("Digite o valor do salario atual:\n");
    scanf("%d",&atual);
    printf("Digite a porcentagem de reajuste:\n");
    scanf("%d",&reajuste);
    novo = (atual*reajuste/100);
    printf("o empregado passara a receber:%d",novo+atual,"%");
}