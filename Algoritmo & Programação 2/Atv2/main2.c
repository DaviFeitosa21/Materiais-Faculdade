#include <stdio.h>
#include <string.h>

struct UM
{
    char nome[30];
    int matricula;
    float N1, N2;
};

int main() 
{
    struct UM um_mat[3];
    
    float media = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf(" %s", um_mat[i].nome);

        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &um_mat[i].matricula);

        printf("\nDigite a primeira e segunda nota do aluno: ");
        scanf("%f %f", &um_mat[i].N1, &um_mat[i].N2);

        media = media + um_mat[i].N1 + um_mat[i].N2;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n %s %d %.2f %.2f", um_mat[i].nome, um_mat[i].matricula, um_mat[i].N1, um_mat[i].N2);
    }
    
    
    printf("\nMedia total: %.2f", media/6);



}
