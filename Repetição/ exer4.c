#include<stdio.h>

main(){

int num,contador;
num=0;
contador=1;

while (contador < 5){
    if (num%3==0)
    {
        printf("%d\n",num);
        contador++;
    }
    num++;
}

}
