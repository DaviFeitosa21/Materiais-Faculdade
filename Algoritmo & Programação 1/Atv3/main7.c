#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main() {

    float raio, result;

    printf("Informe o raio do circulo para calcular sua area:");
    scanf("%f", &raio);

    result = PI * pow(raio, 2);

    printf("Area do circulo: %.2f", result);

    return 0;
}