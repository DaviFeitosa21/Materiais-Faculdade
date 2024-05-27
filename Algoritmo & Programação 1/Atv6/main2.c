#include <stdio.h>
#include <stdlib.h>

int main() {

    int tipNum;

    printf("Informe um numero:");
    scanf("%d", &tipNum);
    
    if(tipNum < 0) {
        printf("Numero negativo!");
    }
    else if(tipNum > 0) {
        printf("Numero positivo!");
    }
    else {
        printf("Numero e zero");
    }

    return 0;

}