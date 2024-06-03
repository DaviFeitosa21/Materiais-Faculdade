#include <stdio.h>
#include <stdlib.h>

int main() {

    char opcUtiliza;
    int idade;

    printf("Escolha uma das opcoes de utilizacao do sistema:");
    printf("A - Calcule a idade de varias pessoas\nB - Escreva a sequencia de Fibonnaci\nC - ");
    scanf("%c", &opcUtiliza);

    switch (opcUtiliza) {
        case 'A' :
            while(idade > 0){
                printf("\nDigite uma idade: ");
                scanf("%d", &idade);
                printf("Idade digitada: %d\n", idade);
            }
            break;
        case 'B' :


        default:
            break;
    }
    
    
    return 0;
}
