#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[50], palindromo[50];
    int i, igual = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for(i = 0; i < tamanho; i++){
        palindromo[i] = palavra[tamanho - 1 - i];
    }
    palindromo[i] = '\0';

    printf("Inverso: %s\n", palindromo);

    for (i = 0; i < tamanho; i++){
        if(tolower(palavra[i]) == tolower(palindromo[i])){
            igual++;
        }
    }
    if(tamanho == igual){
        printf("%s e palindroma\n", palavra);
    }else{
        printf("%s nao e palindroma\n", palavra);
    }

    return 0;
}
