#include<stdio.h>
main(){
    int numddd;
    printf("Digite o numero do DDD para saber a qual cidade pertece o numero :\n");
    scanf("%d",&numddd);
    switch (numddd){
    case 61:
        printf("Este DDD pertence ao DF");
        break;

        case 71:
        printf("Este DDD pertence a Salvador");
        break;

        case 11:
        printf("Este DDD pertence a Sao Paulo");
        break;

        case 21:
        printf("Este DDD pertence ao Rio de janeiro");
        break;

        case 32:
        printf("Este  DDD pertence a Juiz De Fora");
        break;

        case 19:
        printf("Este DDD pertence a Campinas");
        break;

        case 27:
        printf("Este DDD pertence a Vitoria");
        break;

        case 31:
        printf("Este pertence a BH");
        break;

    default:
    printf("Cidade no Brasil sem identificacao");
        break;
    }
   
}
