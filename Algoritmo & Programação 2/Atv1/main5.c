#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x = 1;

    printf("Informe um valor inteiro positivo:");
    scanf("%i", &n);

    if(n < 0) {
        printf("Valor negativo invalido!");
    }
    else if(n == 0) {
        printf("Valor nulo invalido!");
    }
    else {
        for(int i = n; i > 1; i--) {
            x *= i; 
        }
        printf("%i", x);
    }

    return 0;
    
}