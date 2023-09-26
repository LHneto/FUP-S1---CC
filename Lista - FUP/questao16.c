#include <stdio.h>

int main() {
    
    int peso_queijo = 50;       
    int peso_presunto = 50;     
    int peso_hamburguer = 100;  

    int quantidade_sanduiches;

    
    printf("Informe a quantidade de sanduíches a fazer: ");
    scanf("%d", &quantidade_sanduiches);

    printf("Quantidade de queijo necessária: %.2lf kg\n", (2.0 * peso_queijo * quantidade_sanduiches) / 1000.0);
    printf("Quantidade de presunto necessária: %.2lf kg\n", (peso_presunto * quantidade_sanduiches) / 1000.0);
    printf("Quantidade de carne (hambúrguer) necessária: %.2lf kg\n", (peso_hamburguer * quantidade_sanduiches) / 1000.0);

    return 0;
}
