//Atividade 10

#ifndef ex10
#define ex10

void somaPoint() {
    int num[5] = {1, 2, 3, 4, 5};
    int *pont = num;

    for (int i = 1; i < 5; i++)
    {
        *pont += *(pont + i);
    }
    
    printf("Soma de todos os vetores: %d", *pont);
}

#endif