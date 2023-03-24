#include <stdio.h>
#include <math.h>
main(){
    float numero, resultado, raiz;
   printf("Digite um numero:");
   scanf("%f",&numero);
   if (numero>=0){
   resultado = (numero*numero);
   printf("O numero digitado ao quadrado e :%.2f\n",resultado);
    raiz = sqrt(resultado);
   printf("A raiz quadrada do numero digitado e :%.2f", raiz);
   }else{
    printf("O numero digitado precisa ser positivo");
   }

   
   
}
