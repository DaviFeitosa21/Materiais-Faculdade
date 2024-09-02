#include <stdio.h>
#include <string.h>

struct DADOS
{
    char rua[20];
    int numero, CEP;
};

struct INFOS
{
    char nome[30];
    struct DADOS dado;
    float saldo;
};

int main()
{
    struct DADOS dado = {"Rua12", 123, 744321};
    struct INFOS info = {"Davi", dado, 12.000};

    printf("Informacoes antes das alteracoes:\n");
    printf("Nome: %s\n", info.nome);
    printf("Rua: %s\n", info.dado.rua);
    printf("Numero: %d\n", info.dado.numero);
    printf("CEP: %d\n", info.dado.CEP);
    printf("Saldo: %.3f\n", info.saldo);

    strcpy(info.nome, "Marcos");
    strcpy(info.dado.rua, "Rua90");
    info.dado.numero = 159;
    info.dado.CEP = 492389;
    info.saldo = 5.000;

    printf("\nInformacoes alteradas:\n");
    printf("Nome: %s\n", info.nome);
    printf("Rua: %s\n", info.dado.rua);
    printf("Numero: %d\n", info.dado.numero);
    printf("CEP: %d\n", info.dado.CEP);
    printf("Saldo: %.3f\n", info.saldo);
}
