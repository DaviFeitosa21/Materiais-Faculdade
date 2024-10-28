#include <stdio.h>

typedef struct ESTUDANTE {
    char nome[30];
    int idade;
    float nota;
}Aluno;

void dadosEstudante(Aluno estud) {
    printf("Nome: %s\n", estud.nome);
    printf("Idade: %d\n", estud.idade);
    printf("Nota: %.2f\n", estud.nota);
}

void atualizarEstudante(Aluno *aluno) {
    printf("Nome:\n");
    scanf(" %s", aluno->nome);

    printf("Idade:\n");
    scanf("%d", &aluno->idade);

    printf("Nota:\n");
    scanf("%f", &aluno->nota);
}

int main() {
    Aluno aluno;

    printf("\n======CADASTRO DO ESTUDANTE======\n");
    printf("Nome:\n");
    scanf(" %s", aluno.nome);

    printf("Idade:\n");
    scanf("%d", &aluno.idade);

    printf("Nota:\n");
    scanf("%f", &aluno.nota);

    printf("\n======DADOS DO ESTUDANTE======\n");
    dadosEstudante(aluno);

    printf("\n======ATUALIZAR CADASTRO DO ESTUDANTE======\n");
    atualizarEstudante(&aluno);

    printf("\n======CADASTRO ATUALIZADO DO ESTUDANTE======\n");
    dadosEstudante(aluno);
}