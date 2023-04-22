#include <stdio.h>

main() {
    int i, num, soma = 0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10;

    printf("A media dos numeros e: %.2f\n", media);
}
