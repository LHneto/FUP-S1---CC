#include <stdio.h>

int main() {
    float minutos;
    int horas, minutosConvertidos;
    float segundos;

    
    printf("Digite o intervalo de tempo em minutos: ");
    scanf("%f", &minutos);

    
    horas = (int)(minutos / 60);

    
    minutosConvertidos = (int)minutos % 60;

   
    segundos = (minutos - (horas * 60 + minutosConvertidos)) * 60;

    printf("%d h %d min %.1f s\n", horas, minutosConvertidos, segundos);

    return 0;
}