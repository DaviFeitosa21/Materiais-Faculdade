#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcEscolha;

    //caso 1
    int numPar;

    //caso 2
    int num, maior, menor;

    //caso 3
    int numMat;

    do
    {
        printf("Escolha uma das opcoes do menu:\n");
        printf("1 - Numeros pares\n2 - Maior e menor numero\n3 - Tabuada\n");
        scanf("%d", &opcEscolha);

        switch (opcEscolha){

            case 1:
                for (int i = 0; i < 5; i++) {
                    printf("Digite um numero: ");
                    scanf("%d", &numPar);

                    if(numPar % 2 == 0) {
                        printf("Numero par: %d\n", numPar);
                    }
                }
                break;
            
            case 2:
                printf("Digite um numero:");
                scanf("%d", &num);

                maior = num;
                menor = num;

                for(int i = 1; i < 5; i++) {
                    printf("Digite um numero inteiro:");
                    scanf("%d", &num);

                    if(num > maior) {
                        maior = num;
                    }
                    else if(num < menor) {
                        menor = num;
                    }
                }

                printf("Maior numero: %d\n", maior);
                printf("Menor numero: %d\n", menor);
                break;
            
            case 3:
                printf("Digite um numero: ");
                scanf("%d", &numMat);

                printf("Tabuada numero %d", numMat);
                for (int i = 0; i < 10; i++)
                {
                    printf("%d x %d = %d\n", numMat, i, numMat * i);
                }
                break;

            default:
                break;
            }
    } while (opcEscolha != 1 && opcEscolha != 2 && opcEscolha != 3);
    
    return 0;

}