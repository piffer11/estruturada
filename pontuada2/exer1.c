#include<stdio.h>

int main() {
    int n;
    printf("Digite o numero de voltas :");
    scanf("%d",&n);

    float tempos[n];
    float melhorTempo = 9999999;
    float voltaMelhorTempo = -1;
    float somaTempos = 0;

    for (int i = 0; i < n; i++)
    {
        printf("infome o tempo da volta %d:",i + 1);
        scanf("%f", &tempos[i]);

        if (tempos[i] < melhorTempo ){
            melhorTempo = tempos[i];
            voltaMelhorTempo = i + 1;
        }
        
        somaTempos += tempos[i];

    }
    float mediaTempos = (float) somaTempos / n;
    printf("Melhor tempo:%.2f\n",melhorTempo);
    printf("Volta do melhor tempo : %.2f\n",voltaMelhorTempo);
    printf("Tempo medio:%.2f\n",mediaTempos);   

    return 0;
}
