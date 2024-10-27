#include <stdio.h>

void minhaFuncao(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        vetor[i] = vetor[i] + i;
}

int main() {
    int meuVetor[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
        printf("\n%d" , meuVetor[i]);
        minhaFuncao(meuVetor, 5);

    for (int i = 0; i < 5; i++)
        printf("\n%d", meuVetor[i]);
    
    return 0;
}

