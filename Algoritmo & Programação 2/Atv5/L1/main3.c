#include <stdio.h>

//Atividade 3

float POT_recursiva(float x, int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 1 / POT_recursiva(x, -n);
    }
    return x * POT_recursiva(x, n - 1);
}

float POT_iterativa(float x, int n) {
    float resultado = 1;
    int i;

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    for (i = 0; i < n; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    float x;
    int n;

    printf("Digite dois valores para o calculo:\n");
    scanf("%f %d", &x, &n);

    printf("Potencia (Recursiva): %.2f^%d = %.2f\n", x, n, POT_recursiva(x, n));
    printf("Potencia (Iterativa): %.2f^%d = %.2f\n", x, n, POT_iterativa(x, n));
    return 0;
}
