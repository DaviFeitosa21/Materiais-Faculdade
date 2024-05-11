#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float valorP, taxaJ, resultCalc;
    int periodoN;

    printf("===Calculadora taxa de juros===\n\n");

    printf("Informe um valor principal:");
    scanf("%f", &valorP);

    printf("Informe a taxa de juros anual:");
    scanf("%f", &taxaJ);

    printf("Informe um periodo em anos para o calculo:");
    scanf("%i", &periodoN);

    resultCalc = valorP * pow(1 + taxaJ, periodoN);

    printf("Valor calculado: %.2f", resultCalc);

    return 0;
}