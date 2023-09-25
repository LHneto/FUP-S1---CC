#include <stdio.h>

int main() {
    float litrosRefresco;

    
    printf("Digite a quantidade de litros de refresco desejada: ");
    scanf("%f", &litrosRefresco);

 
    printf("Para fazer %.2f litros de refresco, são necessários:\n", litrosRefresco);
    printf("%.2f litros de água mineral\n", (8.0 / 10.0) * litrosRefresco);
    printf("%.2f litros de suco de maracujá\n", (2.0 / 10.0) * litrosRefresco);

    return 0;
}






