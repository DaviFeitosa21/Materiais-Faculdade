#include <stdio.h>

float nota1, nota2, nota3;
char tipo_media;

#include "lib/media.h"

int main()
{
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o tipo de media ('A' para Aritmetica ou 'P' para Ponderada): ");
    scanf(" %c", &tipo_media);

    float resultado;

    if (tipo_media == 'A' || tipo_media == 'a') 
    {
        resultado = mediaAritmetica();
        printf("A media aritmetica e: %.2f\n", resultado);
    }
    else if (tipo_media == 'P' || tipo_media == 'p') 
    {
        resultado = mediaPonderada();
        printf("A media ponderada e: %.2f\n", resultado);
    } 
    else 
    {
        printf("Tipo de media invalido.\n");
    }

    return 0;
}
