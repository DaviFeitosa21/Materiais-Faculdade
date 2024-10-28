#ifndef ex6
#define ex6

//Atividade 6

void imp_matriz(int *matriz) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            int *elemento = matriz + i * COLUNAS + j;
            printf("%d ", *elemento);
        }
        printf("\n");
    }
}

void par_matriz(int *matriz) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           int *elemento = matriz + i * COLUNAS + j;
           if (*elemento % 2 == 0) {
                *elemento = 1000;
           }
           printf("%d ", *elemento);
        }
        printf("\n");
    }
}

#endif 