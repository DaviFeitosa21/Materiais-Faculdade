#include <stdio.h>

int main() {

    int matricula, aluno_remov = 0;
    char linhas[100];
    float nota1, nota2;

    FILE *nota_aluno, *arq_temp;

    nota_aluno = fopen("aluno.txt", "r");
    if(nota_aluno == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    arq_temp = fopen("arq_temp.txt", "w");
    if(arq_temp == NULL) {
        printf("Erro ao criar o arquivo temporario!");
        fclose(nota_aluno);
        return 1;
    }
    
    int matricula_comp;

    while(fgets(linhas, sizeof(linhas), nota_aluno) != NULL) {
        if(sscanf(linhas, "Matricula do aluno: %d", &matricula_comp) == 1) {
            char matricula[100], nome[100], curso[100], notas[100];

            strcpy(matricula, linhas);
            fgets(nome, sizeof(nome), nota_aluno);
            fgets(curso, sizeof(curso), nota_aluno);
            fgets(notas, sizeof(notas), nota_aluno);

            if (sscanf(notas, "Nota 1: %f, Nota 2: %f", &nota1, &nota2) == 2) {
                float media = (nota1 + nota2) / 2;

                if (media >= 6.0) {
                    fputs(matricula, arq_temp);
                    fputs(nome, arq_temp);
                    fputs(curso, arq_temp);
                    fputs(notas, arq_temp);
                } else {
                    aluno_remov = 1;
                }
            }
        }
        else {
            fputs(linhas, arq_temp);
        }
    }
    
    fclose(nota_aluno);
    fclose(arq_temp);

    if(aluno_remov) {
        remove("aluno.txt");
        rename("arq_temp.txt", "aluno.txt");
        printf("Alunos com nota inferior a 6.0 foram removidos!");
    }
    else {
        remove("arq_temp.txt");
        printf("Nenhum aluno com media inferior a 6 encontrado!");
    }
}