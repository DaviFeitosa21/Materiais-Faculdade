#include <stdio.h>

int N;
#include "lib/fibonacci.h"

int main() 
{
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N < 0) 
    {
        printf("N nao pode ser negativo.\n");
        return 1;
    }

    int valorFibo = fibonacci(N);
    printf("O termo %d da sequencia de Fibonacci e: %d\n", N, valorFibo);
}