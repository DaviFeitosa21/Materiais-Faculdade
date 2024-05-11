#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("===Calculo de Media Aritmetica entre 3 numeros===\n");

    printf("Informe o primeiro numero:");
    scanf("%f", &nota1);

    printf("Informe o segundo numero:");
    scanf("%f", &nota2);

    printf("Informe o terceiro numero:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media dos numeros informados: %.2f\n", media);

    return 0;
}