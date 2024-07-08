#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plvr[100], plvr_2[100], *palav;
    int quantPalav = 0;
    int tmn;

    printf("Digite uma palavra: ");
    fgets(plvr, sizeof(plvr), stdin);

    plvr[strcspn(plvr, "\n")] = '\0';

    strcpy(plvr_2, plvr);

    tmn = strlen(plvr);

    palav = strtok(plvr_2, " ");

    while (palav != NULL) {
        quantPalav++;
        palav = strtok(NULL, " ");
    }

    printf("Foram digitadas %d palavras.\n", quantPalav);
    printf("A palavra possui %d caracteres.\n", tmn);

    for(int i = 0; plvr[i]; i++){
        plvr[i] = toupper((unsigned char) plvr[i]);
    }

    printf("Palavra em maiusculo: %s\n", plvr);

     for(int i = 0; plvr[i]; i++){
        plvr[i] = tolower((unsigned char) plvr[i]);
    }

    printf("Palavra em minusculo: %s\n", plvr);

    return 0;
}