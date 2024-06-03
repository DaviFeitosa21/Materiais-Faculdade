#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {

    int j = 1;
    int i = 0;

    for(int k = 1; k != n; k++) {

        int t = i + j;
        i = j;
        j = t;

        return j;
    }
}

int main() {

    char opcUtiliza;
    int idade, numFibo, result_fibo;

    printf("Escolha uma das opcoes de utilizacao do sistema:");
    printf("A - Calcule a idade de varias pessoas\nB - Escreva a sequencia de Fibonnaci\nC - Leitura de numeros primos");
    scanf("%c", &opcUtiliza);

    do {
        switch (opcUtiliza) {
            case 'A' :
                while(idade > 0){
                    printf("\nDigite uma idade: ");
                    scanf("%d", &idade);
                    printf("Idade digitada: %d\n", idade);
                }
                break;
            case 'B' :
                printf("Digite um numero:");
                scanf("%d", &numFibo);
                result_fibo = fibonacci(numFibo);

            default:
                printf("tes");
                break;
        }
    } while (opcUtiliza != 'A' && opcUtiliza != 'B' && opcUtiliza != 'C');
    
    return 0;
}
