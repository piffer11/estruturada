#include <stdio.h>
int main(){

    int numero;

    printf("Informe o valor: ");
    scanf("%d", &numero);

    if(numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0){
        printf("Divisivel por 2, 3 ou 5.\n");
    }else{
        printf("Nao divisivel por 2, 3 e 5.\n");
}
}