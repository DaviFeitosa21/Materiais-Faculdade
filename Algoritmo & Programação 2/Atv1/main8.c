#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, isPalindrome = 1;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    length = strlen(str);

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
    {
        printf("É um palíndromo.\n");
    }else
    {
        printf("Não é um palíndromo.\n");
    }
}
