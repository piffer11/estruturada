#include <stdio.h>

struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

int main() {
    struct Aluno alunos[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Informe o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 100, stdin);

        printf("Informe o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Informe o curso do aluno %d: ", i+1);
        fgets(alunos[i].curso, 100, stdin);
    }
    
    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }
    
    return 0;
}
