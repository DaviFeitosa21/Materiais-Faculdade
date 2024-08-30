#include <stdio.h>
#include <string.h>

//Atividades 6 e 7

struct NASCIMENTO
{
    int dia, mes, ano;
}NASCIMENTO;

struct FICHA_CLIENTE
{
    char nome[30], email[30], endereco[50], sexo[10];
    struct NASCIMENTO dataNascimento;
    int idade, CPF;
    float altura, peso, ICM;
}FICHA;

int main()
{
    printf("\n==============FICHA DO CLIENTE==============\n");
    printf("Digite o nome: \n");
    scanf(" %s", FICHA.nome);

    printf("Digite o email: \n");
    scanf(" %s", FICHA.email);

    printf("Digite a data de nascimento:(dia/mes/ano)\n");
    scanf("%d %d %d", &FICHA.dataNascimento.dia, &FICHA.dataNascimento.mes, &FICHA.dataNascimento.ano);

}