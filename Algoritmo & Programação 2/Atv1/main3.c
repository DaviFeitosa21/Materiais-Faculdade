#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Informe 3 valores inteiros:");
    scanf("%i %i %i", &a,&b, &c );

    int menorAB = (a + b - abs(a - b)) / 2;

    if(menorAB < c) {
        printf("%i e menor.", menorAB);
    }
    else {
        printf("%i e menor", c);
    }

}