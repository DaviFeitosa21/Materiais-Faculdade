#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char letra_substituir, nova_letra = '*';
    int i, j;

    printf("Digite uma palavra: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Digite uma letra que sera substituida: ");
    scanf("%c", &letra_substituir);

    for (i = 0; str[i]; i++) {
        if (tolower(str[i]) == tolower(letra_substituir)) {
            str[i] = nova_letra;
        }
    }

    printf("\nPalavra modificada: %s\n", str);


    return 0;
}