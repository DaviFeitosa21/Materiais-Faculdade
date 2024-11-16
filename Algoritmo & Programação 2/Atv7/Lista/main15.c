#include <stdio.h>

float calcDist(float *x, float *y) {
    return *y - *x;
}

int main() {
    float x, y, dist;

    printf("Digite um valor para o ponto de origem:\n");
    scanf("%f", &x);

    printf("Digite um valor para o ponto de destino:\n");
    scanf("%f", &y);

    dist = calcDist(&x, &y);

    printf("Distancia entre o ponto de origem e ponto de partida:\n");
    printf("%.2f", dist);
}