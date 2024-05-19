#include <stdio.h>
#include <stdlib.h>

int main() {

    int numParImp;

    printf("Informe um numero:");
    scanf("%d", &numParImp);

    if(numParImp % 2 == 0) {
        printf("Numero e par!");
    }
    else {
        printf("Numero e impar!");
    }

    return 0;

}