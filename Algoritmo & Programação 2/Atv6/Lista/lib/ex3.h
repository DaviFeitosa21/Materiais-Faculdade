#ifndef ex3
#define ex3

#include <ctype.h>

void upTam(char *letra){
    for (int i = 0; letra[i] != '\0'; i++) {
        letra[i] = toupper(letra[i]);
    }
}

#endif
