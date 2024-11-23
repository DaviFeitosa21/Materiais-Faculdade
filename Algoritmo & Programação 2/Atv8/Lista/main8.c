#include <stdio.h>

int main() {
    char linha[256];
    FILE *le_aluno;

    le_aluno = fopen("aluno.txt", "r");
    if (le_aluno == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Conteúdo do arquivo 'aluno.txt':\n\n");

    while (fgets(linha, sizeof(linha), le_aluno) != NULL) {
        printf("%s", linha);
    }

    fclose(le_aluno);

    return 0;
}
