#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso, altura, IMC;

    printf("===Calcule o seu IMC(Indice de massa corporal)==\n\n");

    printf("Informe o seu peso:");
    scanf("%f", &peso);

    printf("Informe a sua altura:");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("IMC calculado: %.2f\n", IMC);

    return 0;
}