
#include<stdio.h>
 
int main()
{
	float raio, pi=3.14, area;
	
	printf("Digite o raio = "); 
	scanf("%f", &raio);

	area = pi * raio * raio;

	printf("A area e = %.2f m2 \n", area);
 
	return 0;
}
