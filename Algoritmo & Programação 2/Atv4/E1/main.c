#include <stdio.h>

int F(int x)
{
    return x + 90;
}

int main()
{
    int y;
    printf("Digite um valor: ");
    scanf("%d", &y);
    printf("Entrada: %d | Saida: %d", y, F(y));

    return 0;
}