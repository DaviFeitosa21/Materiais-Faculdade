#include <stdio.h>
#include <string.h>

//Atividade 1 e 2

struct bolsa_Valores
{
    char nome_Companhia[30];
    char area_Atuacao[30];
    float valor_Acao_Atual;
    float valor_Acao_Anterior;
    double variacao_Acao;
}bolsa_acao;

int main() 
{
    printf("Nome da companhia: ");
    scanf(" %s", bolsa_acao.nome_Companhia);

    printf("\nArea de atuacao da empresa: ");
    scanf(" %s", bolsa_acao.area_Atuacao);

    printf("\nValor atual da acao: R$");
    scanf("%f", &bolsa_acao.valor_Acao_Atual);

    printf("\nValor anterior da acao: R$");
    scanf("%f", &bolsa_acao.valor_Acao_Anterior);

    bolsa_acao.variacao_Acao = (bolsa_acao.valor_Acao_Atual - bolsa_acao.valor_Acao_Anterior);

    printf("\n Informacoes gerais: ");
    printf("\nNome da companhia: %s \nAtuacao no mercado:%s \nValor atual da acao: %.2f  \nValor anterior da acao: %.2f \nVariacao da acao: %%%.2f", bolsa_acao.nome_Companhia, bolsa_acao.area_Atuacao, bolsa_acao.valor_Acao_Atual, bolsa_acao.valor_Acao_Anterior, bolsa_acao.variacao_Acao);

}

