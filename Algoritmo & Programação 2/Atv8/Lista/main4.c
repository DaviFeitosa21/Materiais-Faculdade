#include <stdio.h>

int main() {
    int matricula, matricula_const = 0;
    char nome[30], curso[20];
    float nota1, nota2;

    FILE *add_aluno;

    printf("Digite o numero da matricula do aluno:\n");
    scanf("%d", &matricula);

    add_aluno = fopen("aluno.txt", "r");
    if(add_aluno != NULL) {
        char linha[100];
        int matricula_verific;

        while(fgets(linha, sizeof(linha), add_aluno)) {
            if(sscanf(linha, "Matricula do aluno: %d", &matricula_verific) == 1) {
                if (matricula_verific == matricula) {
                    matricula_const = 1;
                    break;
                }
            }
        }

        fclose(add_aluno);
    }

    if(matricula_const) {
        printf("Matricula %d ja existe no arquivo!", matricula);
        return 1;
    }
    
    add_aluno = fopen("aluno.txt", "a");
    if(add_aluno == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(add_aluno, "\n=========================================================\n");

    fprintf(add_aluno, "Matricula do aluno: %d\n", matricula);

    printf("Digite o nome do aluno:\n");
    scanf(" %s", nome);
    fprintf(add_aluno, "Nome do aluno: %s\n", nome);

    printf("Digite o curso do aluno:\n");
    scanf(" %s", curso);
    fprintf(add_aluno, "Curso do aluno: %s\n", curso);

    printf("Digite as duas ultimas notas do aluno:\n");
    scanf("%f %f", &nota1, &nota2);
    fprintf(add_aluno, "Nota 1: %.2f, Nota 2: %.2f", nota1, nota2);

    fprintf(add_aluno, "\n=========================================================\n");

    fclose(add_aluno);

    return 0;
}