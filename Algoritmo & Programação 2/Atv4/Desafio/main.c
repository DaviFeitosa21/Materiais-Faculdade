#include <stdio.h>

struct BANCO
{
    int id_conta;
    char nome_proprietario[30];
    float saldo_conta;
}BANCO[2];

int main()
{
    int opcValida = 0;
    int codOperacao;

    for (int i = 0; i < 2; i++)
    {
        printf("\nDigite o ID da conta:\n");
        scanf("%d", &BANCO[i].id_conta);

        printf("Digite o nome do proprietario da conta:\n");
        scanf(" %s", &BANCO[i].nome_proprietario);

        printf("Digite o saldo incial da conta:\n");
        scanf("%f", &BANCO[i].saldo_conta);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n=================================================\n");
        printf("Contas cadastradas:\n");
        printf("===================================================\n");
        printf("Conta %d:\n", i + 1);
        printf("ID da conta:%d\n", BANCO[i].id_conta);
        printf("Nome do proprietario da conta: %s\n", BANCO[i].nome_proprietario);
        printf("Saldo da conta:%.2f\n", BANCO[i].saldo_conta);
    }

    do
    {
        printf("Digite a operacao que deseja realizar:\n");
        printf("1 - Saque");
        printf("2 - Deposito");
        printf("3 - Transferencia");
        scanf("%d", &codOperacao);

        if()
    } while (opcValida != 0);
    
    


}