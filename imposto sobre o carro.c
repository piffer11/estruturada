#include<stdio.h>
main(){
    float fabricante, distribuidor, consumidor,imposto;
    printf("Digite o valor da fabricacao:");
    scanf("%f",&fabricante);
    distribuidor = (fabricante*0.28)+fabricante;
    imposto = (fabricante*0.45)+ fabricante;
    consumidor = distribuidor + fabricante;
    printf("O carro custa %3.f:", consumidor);
}