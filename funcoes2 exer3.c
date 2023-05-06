#include <stdio.h>

float inflacionarPreco(float preco) {
    if (preco < 100) {
        preco = preco * 1.1;
    } else {
        preco = preco * 1.2;
    }
    return preco;
}

int main() {
    float preco;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    preco = inflacionarPreco(preco);

    printf("O novo preco do produto e R$ %.2f\n", preco);

    return 0;
}
