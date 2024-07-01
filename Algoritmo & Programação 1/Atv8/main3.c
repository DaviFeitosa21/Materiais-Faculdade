#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10], posic;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numeros[i]);
        printf("Posicao da memoria: %d\n", i);
        printf("Numero digitado: %d\n", numeros[i]);
    }

    printf("\nDigite um numero para identificar a posicao no vetor:");
    scanf("%d", &posic);

    if(posic >= 0 && posic < 10) {
        printf("Posicao: %d\n", posic);
        printf("Valor armazenado nesta posicao: %d\n", numeros[posic]);
    }
    else {
        printf("posicao nao existe.");
    }

    return 0;
    
}