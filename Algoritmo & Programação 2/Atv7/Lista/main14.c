//Atividade 14

#include <stdio.h>
#include <string.h>

struct Endereco
{
    char rua[10];
    int numero;
    char cidade[15];
}ENDERECO;

struct Pessoa
{
    char nome[30];
    int idade;
    struct Endereco endereco;
}PESSOA;

int main() {
    struct Pessoa *pointPessoa = &PESSOA;

    strcpy(pointPessoa->nome, "Davi");
    pointPessoa->idade = 20;
    strcpy(pointPessoa->endereco.rua, "Rua1");
    pointPessoa->endereco.numero = 201;
    strcpy(pointPessoa->endereco.cidade, "goiania");

    printf("Informacoes da pessoa:\n");
    printf("Nome: %s\n", PESSOA.nome);
    printf("Idade: %d\n", PESSOA.idade);
    printf("Endereco:\n");
    printf("Rua: %s\n", PESSOA.endereco.rua);
    printf("Numero: %d\n", PESSOA.endereco.numero);
    printf("Cidade: %s", PESSOA.endereco.cidade);
}