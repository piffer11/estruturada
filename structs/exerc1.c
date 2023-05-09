#include <stdio.h>
#include <strings.h>

  struct Pessoa {
  char nome [100];
  int idade;
  char endereco[100];
  };

int main() {
  struct Pessoa pessoa1;
  printf("informe o nome da pessoa:");
  scanf("%50[^\n]s", &pessoa1.nome);
  printf("digite a idade:");
  scanf("%d",&pessoa1.idade);
  getchar();
  printf("informe o endereco:");
  scanf("%50[^\n]",&pessoa1.endereco);

  printf("dados cadastrais:\nNome: %s\nidade:%d\nEndeco: %s\n", pessoa1.nome, pessoa1.idade,pessoa1.endereco);
  
  return 0;
}
