#include <stdio.h>
int var_Global;
#include "lib/impPar.h"

int main()
{
    if (numImparPar() == 0)
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }
}