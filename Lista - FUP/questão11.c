#include <stdio.h>

int main() {
    int totalDias, anos, meses, dias;

  
    printf("Digite a quantidade de dias sem acidentes: ");
    scanf("%d", &totalDias);

  
    anos = totalDias / 365; 
    totalDias = totalDias % 365; 

    
    meses = totalDias / 30; 
   
    dias = totalDias % 30; 

    
    printf("Tempo sem acidentes: %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}
