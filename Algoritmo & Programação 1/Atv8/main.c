#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[5];
    float media = 0;

    printf("Digite 5 numeros: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media = media / 5;

    printf("Media dos numeros digitados: %.2f", media);

    return 0;
}

