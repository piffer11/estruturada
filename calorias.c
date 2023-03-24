#include <stdio.h>

int main() {

    int prato, sobremesa, bebida;

    float calorias = 0;
    printf("Prato\n 1-Vegetariano \n 2-Peixe \n 3-Frango \n 4-Carne \n");
    printf("Escolha seu prato (1-4):\n");
    scanf("%d", &prato);
    
    printf("Sobremesa\n 1-Abacaxi \n 2-Sorvete diet \n 3-Mousse diet \n 4-Mousse chocolate\n ");
    printf("Escolha sua sobremesa (1-4):\n");
    scanf("%d", &sobremesa);

    printf("Bebida \n 1-Cha \n 2-Suco de laranja \n 3-Suco de melao \n 4-Refrigerante diet \n");
    printf("Escolha sua bebida (1-4):\n");
    scanf("%d", &bebida);

    switch (prato) {
        case 1: 
            calorias += 180;
            break;
        case 2: 
            calorias += 230;
            break;
        case 3: 
            calorias += 250;
            break;
        case 4: 
            calorias += 350;
            break;
        default:
            printf("Prato inválido.\n");
            return 0;
    }

    switch (sobremesa) {
        case 1: 
            calorias += 75;
            break;
        case 2: 
            calorias += 110;
            break;
        case 3: 
            calorias += 170;
            break;
        case 4: 
            calorias += 200;
            break;
        default:
            printf("Sobremesa inválida.\n");
            return 0;
    }

    switch (bebida) {
        case 1: 
            calorias += 20;
            break;
        case 2: 
            calorias += 70;
            break;
        case 3: 
            calorias += 100;
            break;
        case 4: 
            calorias += 65;
            break;
        default:
            printf("Bebida inválida.\n");
            return 0;
    }

    printf("Total de calorias: %.2f", calorias);

    return 0;
}