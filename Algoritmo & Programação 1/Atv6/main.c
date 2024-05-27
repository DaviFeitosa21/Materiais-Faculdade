#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, result;
    char operMat;

    printf("Informe um operador matematico:\n");
    printf("Opcoes: + - * /\n");
    scanf(" %c", &operMat);

    printf("Digite o primeiro numero:");
    scanf("%f", &num1);

    printf("Digite o segundo numero:");
    scanf("%f", &num2);

    switch(operMat) {
        case '+' :
            result = num1 + num2;
            printf("Resultado da soma: %.2f", result);
            break;

        case '-' :
            result = num1 - num2;
            printf("Resultado da subtracao: %.2f", result);
            break;
        
        case '*' :
            result = num1 * num2;
            printf("Resultado da multiplicacao: %.2f", result);
            break;
        
        case '/' :
            result = num1 / num2;
            printf("Resultado da divisao: %.2f", result);
            break;
        
        default:
            printf("Operacao matematica nao identificada!");
    }

    return 0;
}