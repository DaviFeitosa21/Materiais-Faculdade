#include <stdio.h>
#include <string.h>

//Atividades 6 e 7

struct NASCIMENTO
{
    int dia, mes, ano;
}NASCIMENTO;

struct IMC
{
    float peso, altura;
}IMC;

struct FICHA_CLIENTE
{
    char nome[30], email[30], endereco[50], sexo[10], CPF[15];
    struct NASCIMENTO dataNascimento;
    struct IMC imc;
    int idade;
}FICHA;

int main()
{
    char id[30];

    printf("\n==============FICHA DO CLIENTE==============\n");
    printf("Digite o nome: \n");
    scanf(" %s", FICHA.nome);

    printf("Digite o email: \n");
    scanf(" %s", FICHA.email);

    printf("Digite a data de nascimento:(dia/mes/ano)\n");
    scanf("%d %d %d", &FICHA.dataNascimento.dia, &FICHA.dataNascimento.mes, &FICHA.dataNascimento.ano);

    printf("Digite o endereco:\n");
    scanf(" %s", FICHA.endereco);

    printf("Digite a idade:\n");
    scanf("%d", &FICHA.idade);

    printf("Digite a altura:\n");
    scanf("%f", &FICHA.imc.altura);

    printf("Digite o peso:\n");
    scanf("%f", &FICHA.imc.peso);

    printf("Digite o CPF:\n");
    scanf(" %s", FICHA.CPF);

    printf("Digite o sexo:\n");
    scanf(" %s", FICHA.sexo);

    printf("\n==============DADOS PREENCHIDOS==============\n");
    printf("NOME: %s\n", FICHA.nome);
    printf("EMAIL: %s\n", FICHA.email);
    printf("DATA DE NASCIMENTO: %02d/%02d/%04d\n", FICHA.dataNascimento.dia, FICHA.dataNascimento.mes, FICHA.dataNascimento.ano);
    printf("ENDERECO: %s\n", FICHA.endereco);
    printf("IDADE: %d\n", FICHA.idade);
    printf("ALTURA: %.2f\n", FICHA.imc.altura);
    printf("PESO: %.2f\n", FICHA.imc.peso);
    printf("CPF: %s\n", FICHA.CPF);
    printf("Sexo: %s\n", FICHA.sexo);
    printf("IMC: %.2f\n", FICHA.imc.peso / (FICHA.imc.altura * FICHA.imc.altura));

    printf("\nDigite um ID para comparar com o nome da ficha:\n");
    scanf(" %s", id);

    if(strcmp(FICHA.nome, id) == 0)
    {
        printf("ID correspondente ao nome da ficha!");
    }
    else
    {
        printf("ID nao corresponde ao nome na ficha!");
    }
}