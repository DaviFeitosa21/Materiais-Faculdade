//Atividade 11

#ifndef ex11
#define ex11

void vetpoint() {
    int nums[5];
    int *pont = nums;

    printf("Digite os numeros do vetor:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    printf("Valores digitados:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", *(pont + i));
    }
}

#endif