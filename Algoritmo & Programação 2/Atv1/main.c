#include <stdio.h>

int main()
{

    int exNum, contVezes = 0;

    do
    {
        if (contVezes <= 0)
        {
            printf("\nEscolha um dos exercicios da lista:\n");
            printf("Ex - 1 / Ex - 2 / Ex - 3 / Ex - 4 / Ex - 5 / Ex - 6 / Ex - 7 / Ex - 8\n");
        }
        else 
        {
            printf("Escolha outro exercicio,\n");
            printf("Digite 0 para sair.\n\n");
        }
        contVezes++;
        scanf("%d", &exNum);

        switch (exNum)
        {

            case 1:
                printf("\nVoce escolheu o exercicio 1!\n");
                break;
        
            case 2:
                printf("\nVoce escolheu o exercicio 2!\n");
                break;
            
            case 3:
                printf("\nVoce escolheu o exercicio 3!\n");
                break;

            case 4:
                printf("\nVoce escolheu o exercicio 4!\n");
                break;
            
            case 5:
                printf("\nVoce escolheu o exercicio 5!\n");
                break;

            case 6:
                printf("Voce escolheu o exercicio 6!\n");
                break;

            case 7:
                printf("Voce escolheu o exercicio 7!\n");
                break;
            
            case 8:
                printf("Voce escolheu o exercicio 8!\n");
                break;
        
            default:
                if (exNum == 0)
                {
                    printf("Finalizando execucao.\n");
                }
                else 
                {
                    printf("Opcao nao listada, escolha outro numero!\n");
                }
                break;

        }

    } while (exNum != 0);
    
    return 0;

}