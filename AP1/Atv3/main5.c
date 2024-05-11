#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, oper;
    int n1, n2, n3, n4;
    
    printf("\n\n");
    printf("===Caluladora de numeros inteiros===\n\n");
    
    printf("Informe o primeiro numero:");
    scanf("%d", &num1);

    printf("Informe o segundo numero:");
    scanf("%d", &num2);

    printf("\n");
    printf("Informe o tipo da operacao que deseja fazer:\n");
    printf("Para adicao digite: 1\n");
    printf("Para subtracao digite: 2\n");
    printf("Para multiplicacao digite: 3\n");
    printf("Para divisao digite: 4\n");
    scanf("%d", &oper);

    printf("\n");

    if(oper == 1) {
        n1 = num1 + num2;
        printf("Resultado da soma: %d", n1);
    }
    else if(oper == 2) {
        n2 = num1 - num2;
        printf("Resultado da subtracao: %d", n2);
    }
    else if(oper == 3) {
        n3 = num1 * num2;
        printf("Resultado da multiplicacao: %d", n3);
    }
    else if(oper == 4) {
        if(num2 == 0) {
            printf("Nao e possivel fazer divisao por zero.");
        }
        else {
            n4 = num1 / num2;
            printf("Resultado da divisao: %d", n4);
        }
    }
    else {
        printf("Problema nao identificado, compile o programa novamente.");
    }

    return 0;
}