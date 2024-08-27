#include <stdio.h>
#include <string.h>

struct DATA
{
    int dia, ano;
    char mes[10];
};

struct PESSOA
{
    char nome[30];
    float nota1, nota2;
    int matricula;
    struct DATA nascimento;
}B;

int main() 
{
    printf("Digite o nome: ");
    scanf(" %s", B.nome);

    printf("Digite as notas:");
    scanf("%f %f", &B.nota1, &B.nota2);

    printf("Digite a matricula: ");
    scanf("%d", &B.matricula);

    printf("Digite o dia, mes e ano: ");
    scanf("%d", &B.nascimento.dia);
    scanf(" %s", B.nascimento.mes);
    scanf("%d", &B.nascimento.ano);

    printf("\n %s %.2f %.2f %d %d %s %d", B.nome, B.nota1, B.nota2, B.matricula, B.nascimento.dia, B.nascimento.mes, B.nascimento.ano);
}
