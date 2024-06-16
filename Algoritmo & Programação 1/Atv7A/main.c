#include <stdio.h>
#include <stdlib.h>

int main() {

    //Switch-Case
    char opcUtiliza;

    //Caso A
    int idade, soma_idade = 0, quant_idade = 0;
    float tot_idade;

    //Caso B
    int num, proxnum, a = 0, b = 1, i = 2;

    //Caso C
    int numPrimo, divisor = 2, primo = 1;

    do {

        printf("Escolha uma das opcoes de utilizacao do sistema:\n");
        printf("A - Calcule a idade de varias pessoas\nB - Escreva a sequencia de Fibonnaci\nC - Leitura de numeros primos\n");
        scanf(" %c", &opcUtiliza);

        switch (opcUtiliza) {
            case 'A' :
                while(idade > 0){
                    printf("\nDigite uma idade: ");
                    scanf("%d", &idade);
                    if(idade <= 0) {
                        break;
                    }
                    printf("Idade digitada: %d\n", idade);
                    soma_idade = soma_idade + idade;
                    quant_idade++;
                }
                tot_idade = soma_idade / quant_idade;
                printf("Media da idade: %.2f", tot_idade);
                break;

            case 'B' :
                printf("Digite um numero para a sequencia de Fibonacci: ");
                scanf("%d", &num);

                printf("%d%d", a, b);
                while (i < num)
                {
                    proxnum = a + b;
                    printf("%d", proxnum);

                    a = b;
                    b = proxnum;
                    i++;
                }
                break;
            
            case 'C' :
                printf("Digite um numero: ");
                scanf("%d", &numPrimo);
                if(numPrimo <= 0) {
                    printf("numero nao pode ser negativo ou zero!");
                    break;
                }
                while (divisor * divisor <= numPrimo && primo){
                    if (numPrimo % divisor == 0){
                        primo = 0;
                    }
                    divisor++;
                }

                if(primo) {
                    printf("%d e primo.\n", numPrimo);
                }
                else {
                    printf("%d nao e primo.\n", numPrimo);
                }
                break;
            default:
                printf("\nOpcao invalida, digite novamente.");
                break;
        }

    } while (opcUtiliza != 'A' && opcUtiliza != 'B' && opcUtiliza != 'C');
    
    return 0;
}
