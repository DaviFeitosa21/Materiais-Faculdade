#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int horas;

    printf("Informe o horario atual:");
    scanf("%d", &horas);

    if(horas >= 0 && horas <= 11) {
        printf("Bom dia!");
    }
    else if(horas >= 12 && horas <= 17) {
        printf("Boa tarde!");
    }
    else if(horas >= 18 && horas <= 23) {
        printf("Boa noite!");
    }
    else {
        printf("Horario nao identificado!");
    }

    return 0;

}