#include <stdio.h>
#include <stdlib.h>

int main() {

    int mesAno;

    printf("Informe um numero correspondente a um mes do ano:");
    scanf("%d", &mesAno);

    switch(mesAno) {
        case 1:
            printf("Janeiro!");
            break;

        case 2:
            printf("Fevereiro!");
            break;

        case 3:
            printf("Marco!");
            break;

        case 4:
            printf("Abril!");
            break;

        case 5:
            printf("Maio!");
            break;

        case 6:
            printf("Junho!");
            break;

        case 7:
            printf("Julho!");
            break;

        case 8:
            printf("Agosto!");
            break;

        case 9:
            printf("Setembro!");
            break;

        case 10:
            printf("Outubro!");
            break;

        case 11:
            printf("Novembro!");
            break;

        case 12:
            printf("Dezembro!");
            break;

        default:
            printf("Mes nao identificado!");
    }

    return 0;

}