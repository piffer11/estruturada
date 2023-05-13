#include <stdio.h>

#define NUM_ALUNOS 5
#define NOTA_APROVACAO 7

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    int i;
    int maiorNota1 = 0;
    float maiorMedia = 0;
    float menorMedia = 10;
    int indiceMaiorNota1 = 0;
    int indiceMaiorMedia = 0;
    int indiceMenorMedia = 0;

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota da primeira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da segunda prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota da terceira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota3);
    }

    
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }
    }
    printf("O aluno com maior nota da primeira prova e %s\n", alunos[indiceMaiorNota1].nome);

    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
        if (media < menorMedia) {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }
    printf("O aluno com maior media geral e %s\n", alunos[indiceMaiorMedia].nome);
    printf("O aluno com menor media geral e %s\n", alunos[indiceMenorMedia].nome);

    for (i = 0; i < NUM_ALUNOS; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media >= NOTA_APROVACAO) {
            printf("O aluno %s foi aprovado\n", alunos[i].nome);
        } else {
            printf("O aluno %s foi reprovado\n", alunos[i].nome);
        }
    }

    return 0;
}
