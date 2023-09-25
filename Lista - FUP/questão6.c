#include <stdio.h>

int main() {
    float precoLitro, pagamento;

    printf("Digite o preço do litro da gasolina em reais: ");
    scanf("%f", &precoLitro);

    
    printf("Digite o valor do pagamento em reais: ");
    scanf("%f", &pagamento);

    
    printf("Você conseguiu abastecer %.2f litros de gasolina.\n", pagamento / precoLitro);

    return 0;