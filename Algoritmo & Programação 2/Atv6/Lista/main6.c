#include <stdio.h>
int LINHAS = 2;
int COLUNAS = 3;
#include "lib/ex6.h"

//Atividade 6

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\nMatriz antes da alteracao:\n");
    imp_matriz(&matriz);

    printf("\nMatriz apos a alteracao:\n");
    par_matriz(&matriz);

    printf("\n");
    
    return 0;
}