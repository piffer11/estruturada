#include <stdio.h>
main(){
    int destino;
    float valor, imposto;
    printf("Digite o valor do produto");
    scanf("%f", &valor);
    printf("Digite o destino \n 1-SP \n 2-PI \n 3-DF \n 4-RJ \n");
    scanf("%d",&destino);
    switch (destino){
    case 1:
    imposto = valor + (valor*0.09);
    printf("O valor do produto com imposto para SP e de :%.2f",imposto);
        break;

        case 2:
        imposto = valor + (valor*0.15);
        printf("O valor do produto com imposto para PI e de :%.2f",imposto);
        break;

        case 3:
         imposto = valor + (valor*0.11);
         printf("O valor do produto com imposto para DF e de :%.2f",imposto);
        break;

        case 4:
        imposto = valor + (valor*0.09);
        printf("O valor do produto com imposto para RJ e de :%.2f",imposto);
        break;
    
    default:
    printf("Erro Digite o numero de um estado valido");
        break;
    }

    
}
