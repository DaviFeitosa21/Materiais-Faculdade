#include <stdio.h>
#include <stdlib.h>

int main() {

    int numLinhas = 3;
    int numColunas = 4;

    float notas[numLinhas][numColunas];
    float soma, media;

    for (int i = 0; i < numLinhas; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < numColunas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < numLinhas; i++) {
        soma = 0;
        for (int j = 0; j < numColunas; j++) {
            soma += notas[i][j];
        }
        media = soma / numColunas;
        printf("A media do aluno %d e: %.2f\n", i + 1, media);
    }

    return 0;

}