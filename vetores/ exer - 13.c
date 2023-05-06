#include <stdio.h>

main() {
    int valores[5];
    int i, posicao_maior, posicao_menor;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);

        if (i == 0) {
            posicao_maior = i;
            posicao_menor = i;
        }

        if (valores[i] > valores[posicao_maior]) {
            posicao_maior = i;
        } else if (valores[i] < valores[posicao_menor]) {
            posicao_menor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", posicao_maior);
    printf("Posicao do menor valor: %d\n", posicao_menor);

}
