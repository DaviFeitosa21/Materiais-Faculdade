#ifndef impPar
#define impPar

int numImparPar()
{
    printf("Digite um numero:\n");
    scanf("%d", &var_Global);

    return(var_Global % 2);
}

#endif