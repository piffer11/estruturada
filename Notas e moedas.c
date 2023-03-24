#include <stdio.h>
int main(){
	double Valor;
	int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
	printf("Dite o valor de troco desejado:");
	scanf("%lf", &Valor);
	
	nota100 = Valor/100;
	Valor = Valor - (nota100*100);
	
	nota50 = Valor/50;
	Valor = Valor - (nota50*50);
	
	nota20 = Valor/20;
	Valor = Valor - (nota20*20);
	
	nota10 = Valor/10;
	Valor = Valor - (nota10*10);
	
	nota5 = Valor/5;
	Valor = Valor - (nota5*5);
	
	nota2 = Valor/2;
	Valor = Valor - (nota2*2);
	
	moeda1 = Valor/1;
	Valor = Valor - (moeda1*1);
	
	moeda50 = Valor/0.50;
	Valor = Valor - (moeda50*0.50);
	
	moeda25 = Valor/0.25;
	Valor = Valor - (moeda25*0.25);
	
	moeda10 = Valor/0.10;
	Valor = Valor - (moeda10*0.10);
	
	moeda5 = Valor/0.05;
	Valor = Valor - (moeda5*0.05);
	
	moeda1 = Valor/0.01;
	Valor = Valor - (moeda01*0.01);
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda50);
	printf("%d moeda(s) de R$ 0.25\n", moeda25);
	printf("%d moeda(s) de R$ 0.10\n", moeda10);
	printf("%d moeda(s) de R$ 0.05\n", moeda5);
	printf("%d moeda(s) de R$ 0.01\n", moeda01);

return 0;
}