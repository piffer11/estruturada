#include <stdio.h>

  main(){
    int A, B, C, D, diferenca;
    
    printf("digite quatro valores separados por espaco para que possa ser feito o calculo:");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    diferenca = (A * B - C * D);
    
    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = %d\n", diferenca);
    
}
