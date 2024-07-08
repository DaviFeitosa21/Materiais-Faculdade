#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, vogais;

    printf("Digite uma palavra: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    j = 0;
    vogais = 0;
    for (i = 0; str[i]; i++) {
        if (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' &&
            tolower(str[i]) != 'i' && tolower(str[i]) != 'o' &&
            tolower(str[i]) != 'u') {
            str[j++] = str[i];
        } else {
            vogais++;
        }
    }
    str[j] = '\0';

    printf("\nPalavra modificada: %s\n", str);

    printf("Numero de vogais: %d\n", vogais);

    return 0;
}