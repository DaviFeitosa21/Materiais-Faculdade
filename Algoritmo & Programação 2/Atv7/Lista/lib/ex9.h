//Atividade 9

#ifndef ex9
#define ex9

#include <ctype.h>

void alteraPoint() {
    char nome[30] = "davi";
    char *pont = nome;

    printf("Variavel sem alteracao: %s\n", nome);

    while (*pont != '\0')
    {
        *pont = toupper(*pont);
        pont++;
    }
    
    printf("Variavel com alteracao: %s\n", nome);
}

#endif