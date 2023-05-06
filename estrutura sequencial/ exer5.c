#include<stdio.h>
main(){
    float carros_vend,total_vendas,salario_fixo,salario_final;
    printf("Quantos carros o vendedor vendeu:\n");
    scanf("%f",&carros_vend);
    printf("Digite o valor total das vendas:\n");
    scanf("%f",&total_vendas);
    printf("Digite o valor fixo do salario do funcionario:\n");
    scanf("%f",&salario_fixo);
    salario_final=salario_fixo+(total_vendas*5/100);
    printf("O salario total e %3.f\n",salario_final);

}
