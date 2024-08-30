#include <stdio.h>
#include <string.h>

struct ALUNO
{
    char nome[30];
    int num_matricula;
    char curso[20];
}ALUNO;

int main()
{
    struct ALUNO aluno[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do aluno %d:\n", i + 1);
        scanf(" %s", aluno[i].nome);

        printf("Digite o numero da matricula do aluno:\n");
        scanf("%d", &aluno[i].num_matricula);

        printf("Digite o curso do aluno:\n");
        scanf(" %s", aluno[i].curso);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n================Informacoes do aluno================\n");
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].num_matricula);
        printf("Curso: %s", aluno[i].curso);
    }
}