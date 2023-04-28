#include <stdio.h>

 main() {
    float notas[15];
    float soma = 0.0;
    int i;

    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    
    float media = soma / 15.0;
    printf("Media geral: %.2f\n", media);
}