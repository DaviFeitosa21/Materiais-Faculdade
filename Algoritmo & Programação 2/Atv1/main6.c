#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, fib, x = 1, y = 1;

    printf("Informe um valor inteiro positivo:");
    scanf("%i", &n);

    if(n < 0) {
        printf("Valor negativo invalido!");
    }
    else if(n == 0) {
        printf("Valor nulo invalido!");
    }

    printf("1 1 ");

    while (x + y <= n)
    {
        fib = x + y;
        x = y;
        y = fib;
        printf("%i ", fib);
    }
    
    return 0;

}