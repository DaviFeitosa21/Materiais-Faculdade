#include <stdio.h>

//Atividade 2

int MULT_recursiva(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + MULT_recursiva(a, b - 1);
}

int MULT_iterativa(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

int main() {
    int a, b;

    printf("Digite dois valores para a multiplicacao:\n");
    scanf("%d %d", &a, &b);

    printf("Multiplicacao (Recursiva): %d * %d = %d\n", a, b, MULT_recursiva(a, b));
    printf("Multiplicacao (Iterativa): %d * %d = %d\n", a, b, MULT_iterativa(a, b));
    return 0;
}
