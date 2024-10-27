#include <stdio.h>
#include <ctype.h>
#include "lib/ex2.h"

int main() {

    char senha[50], carac;
    int tam;

    printf("Digite a senha: \n");
    scanf(" %s", senha);

    printf("Digite um caractere: \n");
    scanf(" %c", &carac);

    printf("Digite um tamanho: \n");
    scanf("%d", &tam);

    crip(&senha, carac, tam);

}