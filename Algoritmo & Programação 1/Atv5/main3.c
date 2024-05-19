#include <stdio.h>
#include <stdlib.h>

int main() {

    int anoBissexto;

    printf("Informe um ano:");
    scanf("%d", &anoBissexto);

    if((anoBissexto % 4 == 0 && anoBissexto % 100 != 0) || (anoBissexto % 400 == 0)) {
        printf("Ano e bissexto!");
    }
    else {
        printf("Ano nao e bissexto");
    }

    return 0;

}