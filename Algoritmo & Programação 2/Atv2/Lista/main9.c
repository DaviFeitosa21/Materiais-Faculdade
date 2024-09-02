#include <stdio.h>
#include <string.h>

struct ALUNOS
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

int main()
{
    int maiorNota = 0, allMaiorMedia = 0, allMenorMedia = 0, i;
    float media, menorMedia, maiorMedia;

    struct ALUNOS aluno[5];

    for (i = 0; i < 5; i++)
    {
        printf("\n\nDigite a matricula do aluno %d:\n", i + 1);
        scanf("%d", &aluno[i].matricula);

        printf("Nome do aluno:\n");
        scanf(" %s", aluno[i].nome);

        printf("Digite a nota 1 do aluno:\n");
        scanf("%f", &aluno[i].nota1);

        printf("Digite a nota 2 do aluno:\n");
        scanf("%f", &aluno[i].nota2);

        printf("Digite a nota 3 do aluno:\n");
        scanf("%f", &aluno[i].nota3);
    }
    
    for (i = 1; i < 5; i++) 
    {
        if (aluno[i].nota1 > aluno[maiorNota].nota1) 
        {
            maiorNota = i;
        }
    }
    
    maiorMedia = menorMedia = (aluno[0].nota1 + aluno[0].nota2 + aluno[0].nota3) / 3;

    for (i = 1; i < 5; i++) 
    {
        media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
        if (media > maiorMedia) 
        {
            maiorMedia = media;
            allMaiorMedia = i;
        }
        if (media < menorMedia) 
        {
            menorMedia = media;
            allMenorMedia = i;
        }
    }
    
    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s, Matricula: %d, Nota 1: %.2f\n", aluno[maiorNota].nome, aluno[maiorNota].matricula, aluno[maiorNota].nota1);

    printf("\nAluno com maior media geral:\n");
    printf("Nome: %s, Matricula: %d, Media: %.2f\n", aluno[allMaiorMedia].nome, aluno[allMaiorMedia].matricula, maiorMedia);

    printf("\nAluno com menor media geral:\n");
    printf("Nome: %s, Matricula: %d, Media: %.2f\n", aluno[allMenorMedia].nome, aluno[allMenorMedia].matricula, menorMedia);

    for (i = 0; i < 5; i++) {
        media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
        printf("\nAluno: %s, Matricula: %d, Media: %.2f - %s\n", aluno[i].nome, aluno[i].matricula, media, (media >= 6.0) ? "Aprovado" : "Reprovado");
    }
}
