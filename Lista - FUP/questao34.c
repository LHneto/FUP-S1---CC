#include <stdio.h>

int main() {
    float dinheiroEmReais, cotacaoDolar, cotacaoMarcoAlemao, cotacaoLibraEsterlina;

    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &dinheiroEmReais);

  
    cotacaoDolar = 5.65;
    cotacaoMarcoAlemao = 3.27;
    cotacaoLibraEsterlina = 7.48;

    
    float dinheiroEmDolares = dinheiroEmReais / cotacaoDolar;
    float dinheiroEmMarcosAlemaes = dinheiroEmReais / cotacaoMarcoAlemao;
    float dinheiroEmLibrasEsterlinas = dinheiroEmReais / cotacaoLibraEsterlina;

    
    printf("Quantidade em dólares: $%.2f\n", dinheiroEmDolares);
    printf("Quantidade em marcos alemães: %.2f DM\n", dinheiroEmMarcosAlemaes);
    printf("Quantidade em libras esterlinas: £%.2f\n", dinheiroEmLibrasEsterlinas);

    return 0;
}






