#include <stdio.h>

int main() {

    FILE *pont_arq;

    pont_arq = fopen("dados.txt", "w");

    if(pont_arq == NULL) {
        printf("Erro na leitura do arquivo!");
    }

    for (int i = 0; i <= 100; i += 10)
    {
        fprintf(pont_arq, "%d\n ", i);
    }

    fclose(pont_arq);

}