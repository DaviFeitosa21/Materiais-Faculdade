#include <stdio.h>

//Atividade 1

void funcao_troca(int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void dec_inc(int *x, int *y) {
    int aux;
    aux = *x;
    *x -= *y;
    *y += aux;
}

void circulo(float *x, float *y, float z) {
    int aux;
    *x = z * 3 * z;
    *y = (*x * 2) / z;
}

void quad(float *x, float *y, float z) {
    int aux;
    *x = z * 4;
    *y = z * z;
}

int main() {
    int a, b, c, d;
    float r, p, ar;

    printf("Digite dois valores: \n");
    scanf("%d %d", &a, &b);

    funcao_troca(&a, &b);
    printf("%d %d", a, b);
    

    printf("\nDigite dois valores: \n");
    scanf("%d %d", &c, &d);

    dec_inc(&c, &d);
    printf("%d %d", c, d);


    printf("Digite o valor do raio do circulo: \n");
    scanf("%f", &r);

    printf("Digite o perimetro do circulo: \n");
    scanf("%f", &p);

    printf("Digite a area de um circulo: \n");
    scanf("%f", &ar);

    circulo(&p, &ar, r);
    printf("%f %f\n", p, ar);

    quad(&p, &ar, r);
    printf("%f %f", p, ar);
}