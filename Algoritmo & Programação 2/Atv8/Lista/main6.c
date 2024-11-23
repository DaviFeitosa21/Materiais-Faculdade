#include <stdio.h>

int main() {

    int matricula, curso_enc = 0;
    char linhas[100], curso[20];

    FILE *curso_aluno, *arq_temp;

    printf("Digite o numero da matricula:\n");
    scanf("%d", &matricula);

    curso_aluno = fopen("aluno.txt", "r");
    if(curso_aluno == NULL) {
        printf("Erro ao abrir o arquivo!");
        return;
    }

    arq_temp = fopen("arq_temp.txt", "w");
    if(arq_temp == NULL) {
        printf("Erro ao criar o arquivo temporario!");
        fclose(curso_aluno);
        return;
    }
    
    int matricula_comp;

    while(fgets(linhas, sizeof(linhas), curso_aluno) != NULL) {
        if(sscanf(linhas, "Matricula do aluno: %d", &matricula_comp) == 1) {
            if(matricula_comp == matricula) {
                fputs(linhas, arq_temp);

                fgets(linhas, sizeof(linhas), curso_aluno);
                fputs(linhas, arq_temp);

                fgets(linhas, sizeof(linhas), curso_aluno);
                fputs(linhas, arq_temp);

                printf("Digite o novo curso do aluno do aluno:\n");
                scanf(" %s", curso);

                fprintf(arq_temp, "Novo curso: %s\n", curso);

                curso_enc = 1;

                continue;
            }
        }
        fputs(linhas, arq_temp);
    }
    
    fclose(curso_aluno);
    fclose(arq_temp);

    if(curso_enc) {
        remove("aluno.txt");
        rename("arq_temp.txt", "aluno.txt");
        printf("Curso foi alterado!");
    }
    else {
        remove("arq_temp.txt");
        printf("Matricula nao encontrada!");
    }
}