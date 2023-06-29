#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo *prox;
} Veiculo;

void inserir(Veiculo **lista, char *proprietario, char *combustivel, char *modelo, char *cor, char *chassi, int ano, char *placa) {
    Veiculo *novo = (Veiculo*)malloc(sizeof(Veiculo));
    strcpy(novo->proprietario, proprietario);
    strcpy(novo->combustivel, combustivel);
    strcpy(novo->modelo, modelo);
    strcpy(novo->cor, cor);
    strcpy(novo->chassi, chassi);
    novo->ano = ano;
    strcpy(novo->placa, placa);
    novo->prox = *lista;
    *lista = novo;
}

void listar_diesel_2010(Veiculo *lista) {
    while(lista != NULL) {
        if(lista->ano >= 2010 && strcmp(lista->combustivel, "diesel") == 0) {
            printf("Proprietario: %s\n", lista->proprietario);
        }
        lista = lista->prox;
    }
}

void listar_placas_j(Veiculo *lista) {
    while(lista != NULL) {
        if(lista->placa[0] == 'J' && (lista->placa[7] == '0' || lista->placa[7] == '2' || lista->placa[7] == '4' || lista->placa[7] == '7')) {
            printf("Placa: %s\n", lista->placa);
            printf("Proprietario: %s\n", lista->proprietario);
        }
        lista = lista->prox;
    }
}

bool is_vogal(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void listar_modelo_cor_vogal_par(Veiculo *lista) {
    while(lista != NULL) {
        if(is_vogal(lista->placa[1])) {
            int soma = 0;
            for(int i = 3; i <= 6; i++) {
                soma += lista->placa[i] - '0';
            }
            if(soma % 2 == 0) {
                printf("Modelo: %s\n", lista->modelo);
                printf("Cor: %s\n", lista->cor);
            }
        }
        lista = lista->prox;
    }
}

bool has_zero(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '0') return true;
    }
    return false;
}

void trocar_proprietario(Veiculo *lista, char *chassi, char *novo_proprietario) {
    while(lista != NULL) {
        if(strcmp(lista->chassi, chassi) == 0 && !has_zero(lista->placa)) {
            strcpy(lista->proprietario, novo_proprietario);
            break;
        }
        lista = lista->prox;
    }
}

int main() {
    Veiculo *lista = NULL;
    
    while(1) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Inserir veiculo\n");
        printf("2 - Listar proprietarios de carros a diesel a partir de 2010\n");
        printf("3 - Listar placas que comecam com J e terminam com 0, 2, 4 ou 7\n");
        printf("4 - Listar modelo e cor de veiculos com segunda letra da placa vogal e soma dos valores numericos par\n");
        printf("5 - Trocar proprietario de um veiculo\n");
        printf("6 - Sair\n");
        
        int opcao;
        scanf("%d", &opcao);
        
        if(opcao == 1) {
            char proprietario[50];
            char combustivel[10];
            char modelo[50];
            char cor[20];
            char chassi[20];
            int ano;
            char placa[8];
            
            printf("Digite o nome do proprietario: ");
            scanf(" %[^\n]s", proprietario);
            printf("Digite o combustivel (alcool, diesel ou gasolina): ");
            scanf("%s", combustivel);
            printf("Digite o modelo: ");
            scanf(" %[^\n]s", modelo);
            printf("Digite a cor: ");
            scanf("%s", cor);
            printf("Digite o numero do chassi: ");
            scanf("%s", chassi);
            printf("Digite o ano: ");
            scanf("%d", &ano);
            printf("Digite a placa: ");
            scanf("%s", placa);
            
            inserir(&lista, proprietario, combustivel, modelo, cor, chassi, ano, placa);
        } else if(opcao == 2) {
            listar_diesel_2010(lista);
        } else if(opcao == 3) {
            listar_placas_j(lista);
        } else if(opcao == 4) {
            listar_modelo_cor_vogal_par(lista);
        } else if(opcao == 5) {
            char chassi[20];
            char novo_proprietario[50];
            
            printf("Digite o numero do chassi: ");
            scanf("%s", chassi);
            printf("Digite o nome do novo proprietario: ");
            scanf(" %[^\n]s", novo_proprietario);
            
            trocar_proprietario(lista, chassi, novo_proprietario);
        } else if(opcao == 6) {
            break;
        }
    }
    
    return 0;
}
