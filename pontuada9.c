#include <stdio.h>

main() {
    int opcao, qtd;
    float valor, total;
    
    do {
        printf("Escolha uma opcao:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MACA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &qtd);
                valor = 5.0 * qtd;
                printf("Valor total: R$ %.2f\n", valor);
                total += valor;
                break;
            case 2:
                printf("Digite a quantidade de macas: ");
                scanf("%d", &qtd);
                valor = 1.0 * qtd;
                printf("Valor total: R$ %.2f\n", valor);
                total += valor;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &qtd);
                valor = 4.0 * qtd;
                printf("Valor total: R$ %.2f\n", valor);
                total += valor;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida\n");
        }
        
        printf("\n");
        
    } while(opcao != 0);
    
    printf("Valor total da compra: R$ %.2f", total);

}
