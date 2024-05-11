#include <stdio.h>
#include <stdlib.h>

int main() {

    float tempC, convertF;

    printf("Digite uma temperatura em Celsius:");
    scanf("%f", &tempC);

    convertF = (tempC * 9/5) + 32;

    printf("Temperatura convertida em Fahrenheit: %.2f\n", convertF);

    //printf("Temperatura digitada: %.2f", temp);
    return 0;
}