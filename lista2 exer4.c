#include <stdio.h>
#include <stdlib.h>

char validaSexo() {
    char sexo;
    do {
        printf("Digite o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            printf("Opcao invalida! Digite 'M' para masculino ou 'F' para feminino.\n");
        }
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Digite o salario do assalariado: ");
        scanf("%f", &salario);
        if (salario <= 1.0) {
            printf("O salario deve ser maior do que R$1,00!\n");
        }
    } while (salario <= 1.0);
    return salario;
}

char* classificaSalario(float salario) {
    if (salario < 1400.0) {
        return "Abaixo do salario minimo";
    } else if (salario == 1400.0) {
        return "Igual ao salario minimo";
    } else {
        return "Acima do salario minimo";
    }
}

void mostraClassifica(char sexo, float salario, char* classificacao) {
    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classificacao);
}


int main() {
    int n, i, abaixo = 0, acima = 0;
    char sexo;
    float salario;

    printf("Digite o numero de assalariados pesquisados: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Assalariado %d:\n", i);
        sexo = validaSexo();
        salario = validaSalario();
        char* classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);
        if (salario < 1400.0) {
            abaixo++;
        } else if (salario > 1400.0) {
            acima++;
        }
        free(classificacao);
    }

    printf("\nQuantidade de assalariados com salario abaixo do salario minimo: %d\n", abaixo);
    printf("Quantidade de assalariados com salario acima do salario minimo: %d\n", acima);
return 0;
}