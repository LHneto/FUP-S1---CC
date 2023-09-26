#include <stdio.h>

int main() {
    float raio, area;

    
    printf("Digite o raio da pizza: ");
    scanf("%f", &raio);

    
    area = 3.14 * raio * raio;

    
    printf("A área da pizza com raio %.2f é %.2f\n", raio, area);

    return 0;
}
