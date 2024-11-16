#include <stdio.h>

int main() {

    const char *nome_antigo = "dados.txt";
    const char *nome_novo = "matriculados.txt";

    FILE *arq_renom;

    arq_renom = fopen(nome_antigo, "w");
    if (arq_renom == NULL) {
        perror("Erro ao criar o arquivo!");
        return 1;
    }
    
    fclose(arq_renom);

    if(rename(nome_antigo, nome_novo) == 0) {
        printf("Arquivo renomeado com sucesso!");
    }
    else {
        perror("Erro ao renomear o arquivo!");
    }

    return 0;
}