#include <stdio.h>
#include <stdlib.h>

int main() {

    int** matriz;
    int numLinhas = 4;
    int numColunas = 4;

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

    int matrizM = matriz[0][0];
    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            if (matriz[i][j] > matrizM)
            {
                matrizM = matriz[i][j];
            }   
        }
    }

    printf("O maior elemento e: %d", matrizM);

    return 0;

}