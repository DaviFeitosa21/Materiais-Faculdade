#include <stdio.h>

typedef struct 
{
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

void LeAluno(int i) 
{
    printf("Digite a matricula do aluno %d: ", i + 1);
    scanf("%d", &Turma[i].matricula);

    printf("Digite as 3 notas do aluno %d:\n", i + 1);
    for (int j = 0; j < 3; j++) 
    {
        printf("Nota %d: ", j + 1);
        scanf("%f", &Turma[i].notas[j]);
    }
}

void ImprimeTurma() 
{
    for (int i = 0; i < 5; i++) {
        printf("Matricula do aluno %d: %d\n", i + 1, Turma[i].matricula);
        printf("Notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) 
        {
            printf("Nota %d: %.2f\n", j + 1, Turma[i].notas[j]);
        }
        printf("\n");
    }
}

float CalculaMediaAluno(int i) 
{
    float soma = 0;
    for (int j = 0; j < 3; j++) 
    {
        soma += Turma[i].notas[j];
    }
    return soma / 3.0;
}

int main() 
{
    int i;
    float media;

    for (i = 0; i < 5; i++) 
    {
        LeAluno(i);
    }

    ImprimeTurma();

    for (i = 0; i < 5; i++) {
        media = CalculaMediaAluno(i);
        printf("Aluno %d - Media = %.2f\n", i + 1, media);
    }

    return 0;
}
