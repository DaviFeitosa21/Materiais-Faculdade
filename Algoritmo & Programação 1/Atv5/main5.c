#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso, altura, IMC;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if(IMC < 18.5) {
        printf("MAGREZA");
    }
    else if(IMC >= 18.5 && IMC <= 24.9) {
        printf("Normal");
    }
    else if(IMC >= 25 && IMC <= 29.9) {
        printf("SOBREPESO");
    }
    else if(IMC >= 30 && IMC <= 39.9) {
        printf("OBESIDADE");
    }
    else if(IMC >= 40) {
        printf("OBESIDADE GRAVE");
    }
    else {
        printf("IMC nao identificado!");
    }

    printf("\nSeu IMC: %.2f", IMC);

    return 0;
}