#include <stdio.h>

int main() {
    int numTimes, numJog, numJogMais25, numJogMenos18, numJogMais80;
    float somaIdades, somaPesos, somaPesosMais25;
    printf("Digite o numero de times no campeonato: minimo 3 max 9 :");
    scanf("%d", &numTimes);

    numJogMais80 = 0;
    numJogMenos18 = 0;

    for (int i = 1; i <= numTimes; i++) {
        printf("Time %d:\n", i);
        printf("Digite o numero de jogadores minimo 6 max 11: ");
        scanf("%d", &numJog);

        somaIdades = 0.0;
        somaPesos = 0.0;
        somaPesosMais25 = 0.0;
        numJogMais25 = 0;

        for (int j = 1; j <= numJog; j++) {
            int idadeJogador;
            float pesoJogador;

            printf("Digite a idade do jogador %d: ", j);
            scanf("%d", &idadeJogador);

            printf("Digite o peso do jogador %d: ", j);
            scanf("%f", &pesoJogador);

            somaIdades += idadeJogador;
            somaPesos += pesoJogador;

            if (idadeJogador > 25) {
                somaPesosMais25 += pesoJogador;
                numJogMais25++;
            }

            if (idadeJogador < 18) {
                numJogMenos18++;
            }

            if (pesoJogador > 80.0) {
                numJogMais80++;
            }
        }

        float mediaIdades = numJog > 0 ? somaIdades / numJog : 0.0;
        float mediaPesos = numJog > 0 ? somaPesos / numJog : 0.0;
        float mediaPesosMais25 = numJogMais25 > 0 ? somaPesosMais25 / numJogMais25 : 0.0;

        printf("Media de idade dos jogadores do time %d: %.2f\n", i, mediaIdades);
        printf("Media de peso dos jogadores do time %d: %.2f\n", i, mediaPesos);
        printf("Media de peso dos jogadores acima de 25 anos do time %d: %.2f\n", i, mediaPesosMais25);
    }

    printf("Numero de jogadores menores de 18 anos no campeonato: %d\n", numJogMenos18);
    printf("Porcentagem de jogadores com mais de 80 quilos no campeonato: %.2f%%\n"), (numTimes * numJog > 0);
    

    return 0;
    }
