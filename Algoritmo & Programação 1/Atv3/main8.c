#include <stdio.h>
#include <stdlib.h>

int main() {

    float met, cent, milim;

    printf("===Conversor de metros em centimetros e milimetros===\n");

    printf("Informe um numero em metros:");
    scanf("%f", &met);

    cent = met * 100;
    milim = met * 1000;

    printf("Metros convertidos em Centimetros: %.2f\n", cent);
    printf("Metros convertidos em Milimetros: %.2f", milim);

    return 0;
}