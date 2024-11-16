//Atividade 13

#include <stdio.h>

struct aluno
{
    char nome[30];
    int idade;
    float media;
}ALUNO;

int main() {
    struct aluno *pointAluno = &ALUNO;

    printf("Digite o nome do aluno:\n");
    scanf(" %s", pointAluno->nome);

    printf("Digite a idade do aluno:\n");
    scanf("%d", &pointAluno->idade);

    printf("Digite a media do aluno:\n");
    scanf("%f", &pointAluno->media);


    printf("\nInformacoes digitadas:\n");
    printf("Nome: %s\n", ALUNO.nome);
    printf("Idade: %d\n", ALUNO.idade);
    printf("Media: %.2f", ALUNO.media);
}