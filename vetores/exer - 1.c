#include<stdio.h>
int main(){
    int a [6] = {1, 0, 5, -2, -5, 7,};
    int soma;

    soma = a[0]+a[1]+a[5];
    printf("%d\n\n", soma);

    a[4]=100;

    for (int indice = 0; indice < 6; indice++)
    {
        printf("%d", a[indice]);
    }
    

    return 0;
}
