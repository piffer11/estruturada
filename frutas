#include <stdio.h>

int main() {
	
    int opcao, quantidade;
    float total = 0;
    
    printf("Bem-vindo a nossa loja!\n");
    
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Abacaxi (R$ 5.00)\n");
        printf("2. Maca (R$ 1.00)\n");
        printf("3. Pera (R$ 4.00)\n");
        printf("4. Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Voce escolheu Abacaxi. Quantas unidades deseja comprar? ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                printf("Compra realizada com sucesso.\n");
                break;
            case 2:
                printf("Voce escolheu Maca. Quantas unidades deseja comprar? ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                printf("Compra realizada com sucesso.\n");
                break;
            case 3:
                printf("Voce escolheu Pera. Quantas unidades deseja comprar? ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                printf("Compra realizada com sucesso.\n");
                break;
            case 4:
                printf("Obrigado pela compra. O total da sua compra foi de R$ %.2f.\n", total);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        
    } while (opcao != 4);
    
    return 0;
}
