    #include<stdio.h>
main(){
    int nascimento, atual, dias, idade;
    printf ("Digite o ano atual:\n");
    scanf("%d",&atual);
    printf("Digite sua data de nascimento:");
    scanf("%d",&nascimento);
    idade = atual-nascimento;
    dias = idade*365;
    printf("Voce existe ha:  %ddias\n",dias);

}
