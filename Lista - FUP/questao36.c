#include <stdio.h>

int main() {
    float altura_cm, largura_cm, comprimento_cm;
    float perimetro_cm, perimetro_polegadas;


    printf("Digite a altura da bagagem (em cm): ");
    scanf("%f", &altura_cm);

    printf("Digite a largura da bagagem (em cm): ");
    scanf("%f", &largura_cm);

    printf("Digite o comprimento da bagagem (em cm): ");
    scanf("%f", &comprimento_cm);

    
    perimetro_cm = 2 * (altura_cm + largura_cm + comprimento_cm);

 
    perimetro_polegadas = perimetro_cm / 2.54;

    
    printf("Perímetro em centímetros: %.2f cm\n", perimetro_cm);
    printf("Perímetro em polegadas: %.2f in\n", perimetro_polegadas);

    return 0;
}