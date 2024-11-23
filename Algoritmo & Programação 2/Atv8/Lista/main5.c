#include <stdio.h>

int main() {

    int matricula, notas_enc = 0;
    char linhas[100];
    float nova_nota1, nova_nota2;

    FILE *nota_aluno, *arq_temp;

    printf("Digite o numero da matricula:\n");
    scanf("%d", &matricula);

    nota_aluno = fopen("aluno.txt", "r");
    if(nota_aluno == NULL) {
        printf("Erro ao abrir o arquivo!");
        return;
    }

    arq_temp = fopen("arq_temp.txt", "w");
    if(arq_temp == NULL) {
        printf("Erro ao criar o arquivo temporario!");
        fclose(nota_aluno);
        return;
    }
    
    int matricula_comp;

    while(fgets(linhas, sizeof(linhas), nota_aluno) != NULL) {
        if(sscanf(linhas, "Matricula do aluno: %d", &matricula_comp) == 1) {
            if(matricula_comp == matricula) {
                fputs(linhas, arq_temp);

                fgets(linhas, sizeof(linhas), nota_aluno);
                fputs(linhas, arq_temp);

                fgets(linhas, sizeof(linhas), nota_aluno);
                fputs(linhas, arq_temp);

                printf("Digite as novas notas do aluno:\n");
                scanf("%f %f", &nova_nota1, &nova_nota2);

                fprintf(arq_temp, "Nova nota 1: %.2f, Nova nota 2: %.2f\n", nova_nota1, nova_nota2);

                notas_enc = 1;

                continue;
            }
        }
        fputs(linhas, arq_temp);
    }
    
    fclose(nota_aluno);
    fclose(arq_temp);

    if(notas_enc) {
        remove("aluno.txt");
        rename("arq_temp.txt", "aluno.txt");
        printf("Notas foram alteradas!");
    }
    else {
        remove("arq_temp.txt");
        printf("Matricula nao encontrada!");
    }
}