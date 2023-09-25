#include <stdio.h>

int main() {
    double x1, y1, x2, y2, distancia;

  
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

 
    double difX = x2 - x1;
    double difY = y2 - y1;
    distancia = difX * difX + difY * difY;

   
    printf("A distância ao quadrado entre os pontos (%.2lf, %.2lf) e (%.2lf, %.2lf) é %.2lf\n", x1, y1, x2, y2, distancia);

    return 0;
}