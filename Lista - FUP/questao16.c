#include <stdio.h>

int main() {
    int quantidadeSanduiches;
    int fatiasQueijo, fatiasPresunto;

    printf("Digite a quantidade de sanduíches a fazer: ");
    scanf("%d", &quantidadeSanduiches);

   
    fatiasQueijo = 2 * quantidadeSanduiches; 
    fatiasPresunto = quantidadeSanduiches; 


    int pesoCarne = 100 * quantidadeSanduiches; 

    
    printf("Quantidade de queijo necessária: %d fatias\n", fatiasQueijo);
    printf("Quantidade de presunto necessária: %d fatias\n", fatiasPresunto);
    printf("Quantidade de carne (hambúrguer) necessária: %d gramas\n", pesoCarne);

    return 0;
}