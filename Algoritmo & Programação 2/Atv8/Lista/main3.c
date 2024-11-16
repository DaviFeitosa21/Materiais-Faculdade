#include <stdio.h>

int main() {
    int matricula;
    char nome[30], curso[20];
    float nota1, nota2;
    
    FILE *pont_aluno;

    pont_aluno = fopen("aluno.txt", "w");

    if (pont_aluno == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(pont_aluno, "\n=========================================================\n");

    printf("Digite o numero de uma matricula:\n");
    scanf("%d", &matricula);
    fprintf(pont_aluno, "Matricula do aluno: %d\n", matricula);

    printf("Digite o nome do aluno:\n");
    scanf(" %s", nome);
    fprintf(pont_aluno, "Nome do aluno: %s\n", nome);

    printf("Digite o curso do aluno:\n");
    scanf(" %s", curso);
    fprintf(pont_aluno, "Curso do aluno: %s\n", curso);

    printf("Digite as duas ultimas notas do aluno:\n");
    scanf("%f %f", &nota1, &nota2);
    fprintf(pont_aluno, "Nota 1: %.2f, Nota 2: %.2f", nota1, nota2);

    fprintf(pont_aluno, "\n=========================================================\n");

    fclose(pont_aluno);

    return 0;
}