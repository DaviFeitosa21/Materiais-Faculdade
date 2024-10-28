#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib/ex2.h"

int main() {
    char senha[50], carac;
    int tam;

    printf("Digite a senha: \n");
    scanf(" %s", senha);

    printf("Digite um caractere: \n");
    scanf(" %c", &carac);

    tam = strlen(senha);

    printf("Senha sem alteracoes: %s\n", senha);
    crip(senha, carac, tam);
    printf("Senha criptografada: %s", senha);
}