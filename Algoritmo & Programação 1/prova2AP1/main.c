#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int numAlunos = 3;
    int numNotas = 3;
    int tamanhoNome = 50;
    int matriculaAlunos[numAlunos];

    float notas[numAlunos][numNotas];
    float media;


    char** nomes = (char**)malloc(numAlunos * sizeof(char*));
    for (int i = 0; i < numAlunos; i++) 
    {
        nomes[i] = (char*)malloc((tamanhoNome + 1) * sizeof(char));
    }

    for (int i = 0; i < numAlunos; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes[i], tamanhoNome + 1, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;

        printf("Digite o numero da matricula do aluno: ");
        scanf("%d", &matriculaAlunos[i]);
        getchar();
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %s:\n", nomes[i]);
        for (int j = 0; j < numNotas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            if (notas[i][j] < 0 || notas[i][j] > 10) {
            printf("Nota invalida! Insira uma nota entre 0 e 10.\n");
            j--;
        }
        }
    }
    
    printf("\n");

    for (int i = 0; i < numAlunos; i++)
    {
        float soma = 0.0;
        printf("=================================================================================");

        printf("\nInformacoes do Alunos matriculados:\n");
        printf("Nome do Aluno: %s\n", nomes[i]);
        printf("Matriculado do Aluno: %d\n", matriculaAlunos[i]);

        for (int j = 0; j < numNotas; j++) {
            printf("Nota %d: %.2f\n", j + 1, notas[i][j]);
            soma += notas[i][j];
        }
    
        media = soma / numNotas;
        printf("A media do aluno e: %.2f\n", media);

        printf("=================================================================================\n");

    }
    
    return 0;

}