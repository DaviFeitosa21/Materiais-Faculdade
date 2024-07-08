#include <stdio.h>
#include <stdlib.h>

int main() {

    int** matriz;
    int numLinhas = 3;
    int numColunas = 3;

    matriz = (int**)malloc(numLinhas * sizeof(int*));

    for (int i = 0; i < numLinhas; i++)
    {
        matriz[i] = (int)malloc(numColunas * sizeof(int));
    }

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            printf("Digite os valores da matriz:");
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}