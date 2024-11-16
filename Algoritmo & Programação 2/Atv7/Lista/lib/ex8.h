//Atividade 8

#ifndef ex8
#define ex8

void alteraNum() {
    int num = 10;
    int *numP = &num;

    printf("Variavel sem alteracao: %d\n", num);

    *numP = 20;

    printf("Variavel com alteracao: %d", num);
}

#endif