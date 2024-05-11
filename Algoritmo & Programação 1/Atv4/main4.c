#include <stdio.h>
#include <stdlib.h>

int main() {

    int ps1,ps2,ps3;
    float totPs;

    printf("===Media de idades===\n\n");

    printf("Infome a idade da pessoa 1: ");
    scanf("%d", &ps1);

    printf("Informe a idade da pessoa 2: ");
    scanf("%d", &ps2);

    printf("Informe a idade da pessoa 3: ");
    scanf("%d", &ps3);

    totPs = (ps1 + ps2 + ps3) / 3;

    printf("Media entre as idades: %.2f", totPs);

    return 0;

}