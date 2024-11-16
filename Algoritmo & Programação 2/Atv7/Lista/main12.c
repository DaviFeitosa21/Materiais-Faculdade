//Atividade 12

#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[30];
    int idade;
    float media;
}ALUNO;

int main() {
    struct aluno *pointAluno = &ALUNO;

    strcpy(pointAluno->nome, "Davi");
    pointAluno->idade = 20;
    pointAluno->media = 7.0;

    printf("\nInformacoes do aluno:\n");
    printf("Nome: %s\n", ALUNO.nome);
    printf("Idade: %d\n", ALUNO.idade);
    printf("Media: %.2f", ALUNO.media);
}