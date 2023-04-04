#include <stdio.h>
main(){
    int codigo, quantidade;
    float valor;
    printf ("Digite o codigo do produto desejado :");
    scanf("%d",&codigo);
  switch (codigo)
  {
  case 100:
    printf("Digite a quantidade desejada:");
    scanf("%d",&quantidade);
    valor = quantidade*10.10;
    printf("O valor do seu pedido e :%.2f",valor);
    break;

    case 101:
    printf("Digite a quantidade desejada:");
    scanf("%d",&quantidade);
    valor = quantidade*8.30;
    printf("O valor do seu pedido e :%.2f",valor);
    break;
    
    case 102:
    printf("Digite a quantidade desejada:");
    scanf("%d",&quantidade);
    valor = quantidade*8.50;
    printf("O valor do seu pedido e :%.2f",valor);
    break;

    case 103:
     printf("Digite a quantidade desejada:");
     scanf("%d",&quantidade);
     valor = quantidade*12.50;
     printf("O valor do seu pedido e :%.2f",valor);
    break;
  
    case 104:
    printf("Digite a quantidade desejada:");
    scanf("%d",&quantidade);
    valor = quantidade*13.25;
    printf("O valor do seu pedido e :%.2f",valor);
    break;
  default:
  printf("O codigo digitado nao refere a nenhum produto da lanchote!!");
    break;
  }
   
    
   
   
   

}
