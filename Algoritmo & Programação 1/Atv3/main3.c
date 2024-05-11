#include <stdio.h>
#include <stdlib.h>

int main() {
    float areaX, areaY, areaRet;

    printf("===Calcule a area de um retangulo===\n");

    printf("Insira a area X do retangulo:");
    scanf("%f", &areaX);

    printf("Insira a area Y do retangulo:");
    scanf("%f", &areaY);

    areaRet = areaX * areaY;

    printf("A area do retangulo calculada: %.2f", areaRet);

    return 0;
}
