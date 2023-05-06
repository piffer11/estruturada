#include <stdio.h>

main() {
    int num, maior, menor, primeiro = 1;
    
    printf("Digite um numero inteiro se quiser encerrar digite um numero negativo ): ");
    scanf("%d", &num);
    
    while (num >= 0) {
        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) {
                maior = num;
            } else if (num < menor) {
                menor = num;
            }
        }
        
        printf("Digite outro numero inteiro (negativo para encerrar): ");
        scanf("%d", &num);
    }
    
    if (primeiro) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("Maior numero digitado: %d\n", maior);
        printf("Menor numero digitado: %d\n", menor);
    }
}
