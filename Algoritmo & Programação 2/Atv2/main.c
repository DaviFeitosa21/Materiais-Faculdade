#include <stdio.h>
#include <string.h>

struct FICHA
{
    char nome[30];
    float nota;
    int n_Faltas;
};

int main()
{
    struct FICHA mat[3];

    for(int i = 0; i < 3; i++)
    {
        printf("\nDigite o nome: ");
        scanf(" %s", mat[i].nome);

        printf("\nDigite a nota: ");
        scanf("%f", &mat[i].nota);

        printf("\nDigite a quantidade de faltas:");
        scanf("%d", &mat[i].n_Faltas);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n %s %.2f %d", mat[i].nome, mat[i].nota, mat[i].n_Faltas);
    }
    
}