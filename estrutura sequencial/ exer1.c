#include<stdio.h>
main(){
    
    float area, base, altura;
    printf("digite o valor da base:\n");
    scanf("%f",&base);
    printf("Digite o valora da altura:\n");
    scanf("%f",&altura);
    area = (base*altura);
    printf("A area total do retangulo e %3.f:\n",area);
}
