#include <stdio.h>

float calculaMedia(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main() {
    int numEstudantes;
    printf("Digite o numero de estudantes: ");
    scanf("%d", &numEstudantes);

    for (int i = 1; i <= numEstudantes; i++) {
        printf("Digite as notas (separadas por espaco) do estudante %d: ", i);
        float n1, n2, n3;
        scanf("%f %f %f", &n1, &n2, &n3);

        float media = calculaMedia(n1, n2, n3);

        printf("A media do estudante %d e %.2f.\n", i, media);
    }
return 0;
}
