#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10], numeros2[10];

    printf("Digite 10 numeros: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        numeros2[i] = numeros[9 - i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numeros2[i]);
    }
    
    return 0;
    
}