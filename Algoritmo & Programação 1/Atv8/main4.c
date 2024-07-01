#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[12], numeros2[12], mult = 2;

    for(int i = 0; i < 12; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Vetor 1: ");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < 12; i++)
    {
        numeros2[i] = numeros[i] * mult;
        printf("%d ", numeros2[i]);
    }
    
    return 0;

}