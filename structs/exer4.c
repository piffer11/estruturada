#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[100];
    float media;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10], reprovados[10];
    int qtd_aprovados = 0, qtd_reprovados = 0;
    
    
    for (int i = 0; i < 10; i++) {
        printf("Informe a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        getchar(); 
        
        printf("Informe o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 100, stdin);
        
        printf("Informe a media final do aluno %d: ", i+1);
        scanf("%f", &alunos[i].media);
        getchar(); 
        
        printf("\n");
    }
    
    for (int i = 0; i < 10; i++) {
        if (alunos[i].media >= 5.0) {
            aprovados[qtd_aprovados] = alunos[i];
            qtd_aprovados++;
        } else {
            reprovados[qtd_reprovados] = alunos[i];
            qtd_reprovados++;
        }
    }

    printf("Alunos aprovados:\n");
    for (int i = 0; i < qtd_aprovados; i++) {
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Nome: %s", aprovados[i].nome);
        printf("Media final: %.2f\n", aprovados[i].media);
        printf("\n");
    }
    printf("Alunos reprovados:\n");
    for (int i = 0; i < qtd_reprovados; i++) {
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Nome: %s", reprovados[i].nome);
        printf("Media final: %.2f\n", reprovados[i].media);
        printf("\n");
    }
    
    return 0;
}
