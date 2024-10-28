#include <stdio.h>
#include "lib/ex3.h"

//Atividade 3

int main() {
    char frase[50];

    printf("Digite uma frase:\n");
    scanf(" %s", frase);

    printf("Frase em minusculo: %s\n", frase);
    upTam(frase);
    printf("Frase em maiusculo: %s", frase);
}