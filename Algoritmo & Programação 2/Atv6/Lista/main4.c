#include <stdio.h>
#include "lib/ex4.h"

int main() {
    float num[3];

    printf("Digite 3 numeros para serem ordenados:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &num[i]);
    }

    ord_num(&num);

    printf("Numeros ordenados:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\n", num[i]);
    }
}