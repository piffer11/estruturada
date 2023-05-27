#include <stdio.h>

int main() {
    int var1, var2;
    
    printf("Digite o valor da variavel 1: ");
    scanf("%d", &var1);
    
    printf("Digite o valor da variavel 2: ");
    scanf("%d", &var2);
    
    printf("Endereco de var1: %p\n", &var1);
    printf("Endereco de var2: %p\n", &var2);
    
    if (&var1 > &var2) {
        printf("Conteudo do maior endereco: %d\n", var1);
    } else {
        printf("Conteudo do maior endereco: %d\n", var2);
    }
    
    return 0;
}
