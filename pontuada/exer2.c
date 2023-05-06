#include <stdio.h>
#include <math.h>

float calculardistancia(int x1, int y1, int x2, int y2) {
    return sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

 int main() {
    int x1,y1,x2,y2;
    float distancia;

    printf("Informe as coordenadas para o primeiro ponto seprado por espaco: ");
    scanf("%i %i", &x1, &y1);
    
    printf("Informe as coordenadas para o segundo ponto: ");
    scanf("%i %i", &x2, &y2);

    distancia = calculardistancia(x1,y1,x2,y2);

    printf("Distancia: %f",distancia);
}
