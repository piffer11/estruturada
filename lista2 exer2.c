#include <stdio.h>

int validaQuantidade(int quantidade) {
    if (quantidade >= 0) {
        return 1;
    } else {
        return 0;
    }
}

float calculaSalario(int quantidade) {
    float adicional_produtividade = 0;
    if (quantidade > 50) {
        if (quantidade <= 80) {
            adicional_produtividade = (quantidade - 50) * 0.5;
        } else {
            adicional_produtividade = 15 * 0.5 + (quantidade - 80) * 0.75;
        }
    }
    float salario_total = 600 + adicional_produtividade;
    return salario_total;
}

void mostraFinal() {
    int quantidade_funcionarios = 0;
    while (1) {
        int quantidade;
        printf("Digite a quantidade de pecas fabricadas (digite -1 para sair): ");
        scanf("%d", &quantidade);
        if (quantidade == -1) {
            break;
        }
        if (validaQuantidade(quantidade)) {
            float salario = calculaSalario(quantidade);
            printf("O salario e: R$ %.2f\n", salario);
            quantidade_funcionarios++;
        } else {
            printf("Quantidade invalida!\n");
        }
    }
    printf("Total de funcionarios processados: %d\n", quantidade_funcionarios);
}

int main() {
    mostraFinal();
    return 0;
}