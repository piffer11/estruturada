#include<stdio.h>
main(){

    float altura, largura, area, latas;
    printf("Digite a altura da sua parede:\n");
    scanf("%f",&altura);
    printf("Digite a largura da sua parede:\n");
    scanf("%f",&largura);
    area = (altura*largura);
    printf("A area total da sua parede e:%2.f\n",area);
    latas = (area/6.66);
    printf("Voce ira precisar de %2.f lata para pintar sua parede por completo:",latas);


}