#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularValorDesconto(float total, float desconto) {
    return total - (total * desconto);
}

float calcularValorParcela(float total, int parcelas, float juros) {
    float taxaJuros = pow(1 + juros, parcelas);
    return total * (taxaJuros * juros) / (taxaJuros - 1);
}

int imprimirOpcoes() {
    int opcao;
    printf("OPCOES DE PAGAMENTO:\n");
    printf("1) A vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preco da etiqueta)\n");
    printf("3) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    printf("Escolha a opcao de pagamento: ");
    scanf("%d", &opcao);
    return opcao;
}

void opcaoAVista(float total) {
    float valorComDesconto = calcularValorDesconto(total, 0.1);
    printf("Valor total com desconto de 10%%: R$ %.2f\n", valorComDesconto);
}

void opcaoDuasVezes(float total) {
    printf("Valor dividido em duas parcelas por mes: R$ %.2f\n", total / 2);
}

void opcaoParcelado(float total) {
    if (total >= 100) {
        int parcelas;
        float valorParcela;
        printf("Escolha o numero de parcelas (de 3 ate 10): ");
        scanf("%d", &parcelas);
        if (parcelas >= 3 && parcelas <= 10) {
            valorParcela = calcularValorParcela(total, parcelas, 0.03);
            printf("Valor total parcelado em %d vezes com 3%% de juros ao mes: R$ %.2f\n", parcelas, valorParcela * parcelas);
            printf("Valor da parcela: R$ %.2f\n", valorParcela);
        } else {
            printf("Numero de parcelas invalido.\n");
        }
    } else {
        printf("Nao e possivel parcelar compras abaixo de R$ 100,00.\n");
    }
}

int main() {
    float total;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &total);

    opcao = imprimirOpcoes();

    switch (opcao) {
        case 1:
            opcaoAVista(total);
            break;
        case 2:
            opcaoDuasVezes(total);
            break;
        case 3:
            opcaoParcelado(total);
            break;
        default:
            printf("Opção invalida.\n");
            break;
    }

    return 0;
}
