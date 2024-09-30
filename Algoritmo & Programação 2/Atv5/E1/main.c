#include <stdio.h>

int funcao_recursiva(int valor)
{
    int casoBase = 1;

    if(valor == casoBase)
    {
        return 1;
    }
    else
    {
        return 10 * funcao_recursiva(valor - 1) + 2;
    }
}

int main()
{
    int x = 5;

    printf("%d", funcao_recursiva(x));
}