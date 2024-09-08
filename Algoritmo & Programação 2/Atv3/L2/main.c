#include <stdio.h>
int x, y, e;
#include "lib/libCalc.h"

int main()
{
    printf("Digite o numero da operacao que voce deseja fazer:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &e);

    printf("Digite o primeiro valor:\n");
    scanf("%d", &x);

    printf("Digite o segundo valor:\n");
    scanf("%d", &y);

    if (e == 1)
    {
        printf("Resultado da soma: %d", soma());
    }
    else if (e == 2)
    {
        printf("Resultado da subtracao: %d", subt());
    }
    else if(e == 3)
    {
        printf("Resultado da multiplicacao: %d", mult());
    }
    else if (e == 4)
    {
        printf("Resultado da divisao: %.2f", divs());
    }
    else
    {
        printf("Opção nao existe!");
    }
}