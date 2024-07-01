#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[8], maior, menor;

    printf("Digite 8 numeros:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (int i = 0; i < 8; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        else if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;

}