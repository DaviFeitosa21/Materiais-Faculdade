#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int** matriz;
    int numLinhas = 3;
    int numColunas = 3;
    int numContMatriz;
    bool numExMatriz = false;

    matriz = (int**)malloc(numLinhas * sizeof(int*));

    for (int i = 0; i < numLinhas; i++)
    {
        matriz[i] = (int)malloc(numColunas * sizeof(int));
    }

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            printf("Digite os valores da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um numero: ");
    scanf("%d", &numContMatriz);

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            if (matriz[i][j] == numContMatriz)
            {
                numExMatriz = true;
                printf("Numero %d existe na matriz.\n", numContMatriz);
            }
        }
    }

    if (!numExMatriz)
    {
        printf("Numero %d nao encontrado.\n", numContMatriz);
    }
    
    printf("Matriz: \n");
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
