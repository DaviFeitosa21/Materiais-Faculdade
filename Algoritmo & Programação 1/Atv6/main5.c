#include <stdio.h>
#include <stdlib.h>

int main() {

    int numAvali;

    printf("Informe um numero corespondente a sua avalicao:\n ");
    printf("1 - pessimo\n 2 - ruim\n 3 - medio\n 4 - bom \n 5 - excelente\n");
    printf("Digite aqui: ");
    scanf("%d", &numAvali);

    switch (numAvali){
        case 1:
            printf("Avaliacao: Pessimo");
            break;
        
        case 2:
            printf("Avaliacao: Ruim");
            break;

        case 3:
            printf("Avaliacao: medio");
            break;

        case 4:
            printf("Avaliacao: bom");
            break;

        case 5:
            printf("Avaliacao: excelente");    
            break;

        default:
            printf("Escolha apenas numeros de 1 a 5!");
            break;
    }

    return 0;

}