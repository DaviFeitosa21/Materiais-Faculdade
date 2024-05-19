#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    char carteira;

    printf("Informe a idade:");
    scanf("%d", &idade);

    printf("Carteira de motorista e valida?(s/n)");
    scanf(" %c", &carteira);

    if(idade >= 18 && carteira == 's') {
        printf("Pode dirigir!");
    }
    else {
        printf("Nao pode dirigir!");
    }

    return 0;

}