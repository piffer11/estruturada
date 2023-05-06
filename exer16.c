#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    do {
        printf("\nDigite o codigo: ");
        scanf("%d", &codigo);

        switch(codigo) {
            case 0:
                printf("Programa finalizado.\n");
                break;
            case 1:
                printf("Vetor na ordem direta: ");
                for(i = 0; i < 5; i++) {
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Vetor na ordem inversa: ");
                for(i = 4; i >= 0; i--) {
                    printf("%.2f ", vetor[i]);
                }
                printf("\n");
                break;
            default:
                printf("Codigo invalido. Digite 0, 1 ou 2.\n");
        }
    } while(codigo != 0);

    return 0;
}
