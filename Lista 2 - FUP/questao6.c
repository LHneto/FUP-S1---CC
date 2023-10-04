#include <stdio.h>
#include <math.h>

int main() {
    double peso, altura, imc;
    char sexo;

    printf("Digite o peso (em kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    imc = peso / pow(altura, 2);

    printf("IMC: %.2lf\n", imc);
    printf("Condição de peso: ");

    if ((sexo == 'M' && imc < 25.0) || (sexo == 'F' && imc < 24.0)) {
        printf("Abaixo do peso ideal.\n");
    } else if ((sexo == 'M' && imc >= 25.0 && imc <= 29.9) || (sexo == 'F' && imc >= 24.0 && imc <= 28.9)) {
        printf("Peso normal.\n");
    } else {
        printf("Acima do peso ideal.\n");
    }

    return 0;
}