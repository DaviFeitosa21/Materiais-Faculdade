#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas, horasConvert;

    printf("Informe o total de horas:");
    scanf("%i", &horas);

    horasConvert = horas * 3600;

    printf("Horas convertidas em segundos: %i segundos.", horasConvert);


}