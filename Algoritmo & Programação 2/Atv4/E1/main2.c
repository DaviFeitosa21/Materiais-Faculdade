#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

float divisao(int a, int b)
{
    return a / b;
}

int main() 
{
    int x, y;

    printf("Digite o valor de X e Y:\n");
    scanf("%d %d", &x, &y);

    printf("Resultado da soma dos valores: %d\n", soma(x, y));
    printf("Resultado da subtracao dos valores: %d\n", subtracao(x, y));
    printf("Resultado da multiplicacao dos valores: %d\n", multiplicacao(x, y));
    printf("Resultado da divisão dos valores: %.2f\n", divisao(x, y));

    return 0;

}