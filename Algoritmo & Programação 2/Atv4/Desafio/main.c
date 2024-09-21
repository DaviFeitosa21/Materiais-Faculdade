#include <stdio.h>

struct BANCO
{
    int id_conta;
    char nome_proprietario[30];
    float saldo_conta;
}BANCO[2];

float saldoSaque(float saldo, float valor_saque)
{
    if (saldo < valor_saque)
    {
        printf("Saldo Insuficiente!\n");
        return saldo;
    }
    else
    {
        printf("Saque realizado com sucesso!\n");
        return saldo - valor_saque;
    }
}

float saldoDeposito(float saldo, float valor_deposito)
{
    printf("Deposito realizado com sucesso!\n");
    return saldo + valor_deposito;
}

int saldoTranferencia(int id_origem, int id_destino, float valor_transferencia)
{
    int idOrigem = -1, idDestino = -1;

    for (int i = 0; i < 2; i++)
    {
        if (BANCO[i].id_conta == id_origem)
        {
            idOrigem = i;
        }
        if (BANCO[i].id_conta == id_destino)
        {
            idDestino = i;
        }
    }

    if (idOrigem == -1)
    {
        printf("Conta de origem nao identificada!\n");
        return 0;
    }
    if (idDestino == -1)
    {
         printf("Conta de destino nao identificada!\n");
        return 0;
    }
    if (BANCO[idOrigem].saldo_conta < valor_transferencia)
    {
        printf("Saldo insuficiente para transferencia!\n");
        return 0;
    }

    BANCO[idOrigem].saldo_conta -= valor_transferencia;
    BANCO[idDestino].saldo_conta += valor_transferencia;

    printf("Transferencia de R$%.2f realizada com sucesso!\n", valor_transferencia);
    return 1;
}

void visualizaConta(int id_conta_vz, char nome_proprietario_vz[30], float saldo_atual_conta_vz)
{
    printf("\nConta:\n");
    printf("ID: %d\n", id_conta_vz);
    printf("Nome do proprietario: %s\n", nome_proprietario_vz);
    printf("Saldo atual da conta: R$%.2f\n", saldo_atual_conta_vz);
}

int main()
{
    int opcValida, opcValidaIDConta;
    int codOperacao, verificaConta, verificaContaRecebe;
    float valorSaque, valorDeposito, valorTransferencia;

    for (int i = 0; i < 2; i++)
    {
        printf("\nDigite o ID da conta:\n");
        scanf("%d", &BANCO[i].id_conta);

        printf("Digite o nome do proprietario da conta:\n");
        scanf(" %s", &BANCO[i].nome_proprietario);

        printf("Digite o saldo incial da conta:\n");
        scanf("%f", &BANCO[i].saldo_conta);
    }

    printf("\n=================================================\n");
    printf("Contas cadastradas:\n");
    printf("===================================================\n");
    for (int i = 0; i < 2; i++)
    {
       visualizaConta(BANCO[i].id_conta, BANCO[i].nome_proprietario, BANCO[i].saldo_conta);
    }

    do
    {
        opcValida = 1;

        printf("\nDigite a operacao que deseja realizar:\n");
        printf("1 - Saque\n");
        printf("2 - Deposito\n");
        printf("3 - Transferencia\n");
        scanf("%d", &codOperacao);

        if(codOperacao == 1)
        {
            printf("Informe o ID conta que deseja realizar o saque:\n");
            scanf("%d", &verificaConta);

            do
            {
                opcValidaIDConta = 0;

                for (int i = 0; i < 2; i++)
                {
                    if (verificaConta == BANCO[i].id_conta)
                    {
                        visualizaConta(BANCO[i].id_conta, BANCO[i].nome_proprietario, BANCO[i].saldo_conta);

                        printf("Informe o valor do saque: ");
                        scanf("%f", &valorSaque);

                        BANCO[i].saldo_conta -= saldoSaque(BANCO[i].saldo_conta, valorSaque);

                        printf("Saldo atualizado da conta: R$%.2f\n", BANCO[i].saldo_conta);

                        opcValidaIDConta = 1;
                        break;
                    }
                }

                if(!opcValidaIDConta)
                {
                    printf("Conta nao identificada, digite novamente o ID:\n");
                    scanf("%d", &verificaConta);
                }
            } while (!opcValidaIDConta);
        }
        else if(codOperacao == 2)
        {
            opcValidaIDConta = 0;

            do
            {
                printf("Informe o ID da conta que deseja fazer o deposito:\n");
                scanf("%d", &verificaConta);

                for (int i = 0; i < 2; i++)
                {
                    if (verificaConta == BANCO[i].id_conta)
                    {
                        visualizaConta(BANCO[i].id_conta, BANCO[i].nome_proprietario, BANCO[i].saldo_conta);

                        printf("Informe o valor do deposito:\n");
                        scanf("%f", &valorDeposito);
                        
                        BANCO[i].saldo_conta += saldoDeposito(BANCO[i].saldo_conta, valorSaque);

                        printf("Saldo atualizado da conta: R$%.2f\n", BANCO[i].saldo_conta);

                        opcValidaIDConta = 1;
                        break;
                    }

                    if(!opcValidaIDConta)
                    {
                        printf("Conta nao identificada ou senha incorreta, digite novamente o ID:\n");
                        scanf("%d", &verificaConta);
                    }
                    
                }
            } while (!opcValidaIDConta);
        }
        else if(codOperacao == 3)
        {
            opcValidaIDConta = 1;

            do
            {
                printf("Digite o ID da conta que deseja fazer a transferencia:\n");
                scanf("%d", &verificaConta);

                printf("Digite o ID da conta que recebera o valor da tranferencia:\n");
                scanf("%d", &verificaContaRecebe);

                printf("Digite o valor da transferencia:\n");
                scanf("%f", &valorTransferencia);

                opcValidaIDConta = saldoTranferencia(verificaConta, verificaContaRecebe, valorTransferencia);
                if (opcValidaIDConta)
                {
                    printf("\nInformacoes atualizadas das contas:");
                    for (int i = 0; i < 2; i++)
                    {
                        visualizaConta(BANCO[i].id_conta, BANCO[i].nome_proprietario, BANCO[i].saldo_conta);
                    }
                }
            } while (!opcValidaIDConta);
        }
        else
        {
            opcValida = 0;
            printf("Operacao invalida, tente novamente.\n");
        }

    } while (!opcValida);
}