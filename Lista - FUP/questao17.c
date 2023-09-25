#include <stdio.h>

int main() {
    float temperaturaCelsius;

   
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit.\n", temperaturaCelsius, (9.0 / 5.0) * temperaturaCelsius + 32);

    return 0;
}