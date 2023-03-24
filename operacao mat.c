#include <stdio.h>

int main() {
	float num1, num2;
	char operacao;
	printf ("\ndigite o primeiro numero:");
	scanf ("%f",&num1);
	printf("\ndigite o segundo numero:");
	scanf("%f",&num2);
	printf("\nescolha uma opcao:");
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar\n");
	scanf("%s",&operacao);
	switch (operacao)
	{
	case '1':
	printf ("voce escolheu a soma e o resultado foi %.2f", num1+num2);
	break;
	case '2':
	printf ("voce escolheu a subtracao e o resultado foi %.1f", num1-num2);
	break;
	case '4':
	printf ("voce escolheu a multiplicacao e o resultado foi %.1f", num1*num2);	
	break;
	case '3':
	printf ("voce escolheu a divisao e o resultado foi %.1f", num1/num2);	
	break;
	default :
		printf("a opercao e invalida");

	}
}
