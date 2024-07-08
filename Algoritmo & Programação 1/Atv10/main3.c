#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char*** matriz;
    int numLinhas = 3;
    int numColunas = 3;
    int tamanhoNome = 50;

    matriz = (char***)malloc(numLinhas * sizeof(char**));

    for (int i = 0; i < numLinhas; i++) {
        matriz[i] = (char**)malloc(numColunas * sizeof(char*));
        for (int j = 0; j < numColunas; j++) {
            matriz[i][j] = (char*)malloc((tamanhoNome + 1) * sizeof(char));
        }
    }

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < numColunas; j++)
        {
            printf("Digite os valores da matriz:");
            fgets(matriz[i][j], tamanhoNome + 1, stdin);
            matriz[i][j][strcspn(matriz[i][j], "\n")] = 0;
        }
    }
    
    printf("Nomes:\n");
    for (int i = 0; i < numLinhas; i++) {
        for (int j = 0; j < numColunas; j++) {
            printf("%-20s ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}