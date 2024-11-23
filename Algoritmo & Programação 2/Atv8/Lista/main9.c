#include <stdio.h>
#include <string.h>

int main() {
    char linha[256];
    FILE *le_aluno;

    le_aluno = fopen("aluno.txt", "r");
    if (le_aluno == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Alunos com nomes que começam com a letra 'M':\n\n");

    char matricula[256], nome[256], curso[256], notas[256];
    while (fgets(linha, sizeof(linha), le_aluno) != NULL) {
        if (strstr(linha, "Matricula do aluno:") != NULL) {
            strcpy(matricula, linha);

            fgets(nome, sizeof(nome), le_aluno);
            if (strncmp(nome, "Nome do aluno: ", 15) == 0) {
                memmove(nome, nome + 15, strlen(nome) - 14);
            }

            fgets(curso, sizeof(curso), le_aluno);

            fgets(notas, sizeof(notas), le_aluno);

            nome[strcspn(nome, "\n")] = '\0';

            if (nome[0] == 'M' || nome[0] == 'm') {
                printf("%s%s%s%s", matricula, nome, curso, notas);
                printf("---------------------------------------------------------\n");
            }
        }
    }

    fclose(le_aluno);

    return 0;
}
