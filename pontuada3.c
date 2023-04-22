#include <stdio.h>

#define PI 3.14159

main() {
    double raio, area, volume;
    
    printf("Insira o valor do raio da esfera: ");
    scanf("%lf", &raio);
    
    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;
    
    printf("Área da superfície: %lf\n", area);
    printf("Volume da esfera: %lf\n", volume);
}
