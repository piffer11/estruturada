#include <stdio.h>
main(){
    int nota1, nota2, nota3, media;
    printf("Digite a primeira nota :");
    scanf("%d",&nota1);
    printf("Digite a segunda nota :");
    scanf("%d",&nota2);
    printf("Digite a terceira nota");
    scanf("%d",&nota3);
    media = ((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
    printf("A media das notas com seus devidos pesos aplicados e: %d",media);
}