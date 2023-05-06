#include <stdio.h>
#include <math.h>

#define N 10

int main() {
    int v[N];
    int i;
    double soma = 0.0, media, desvioPadrao;

    printf("Digite %d numeros inteiros:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < N; i++) {
        soma += v[i];
    }
    media = soma / N;

    soma = 0.0;
    for(i = 0; i < N; i++) {
        soma += pow(v[i] - media, 2);
    }

   
    desvioPadrao = sqrt(soma / (N - 1));

    printf("O desvio padrao do vetor v eh: %.2lf\n", desvioPadrao);

    return 0;
}
