#include <stdio.h>

struct pessoa
{
    int CPF;
    char nome[50];
    float compras[3];
};

struct pessoa pessoas[3];

void le_escreve(struct pessoa vet[], int tamanho) {

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um CPF:\n");
        scanf("%d", &vet[i].CPF);

        printf("Digite um nome:\n");
        scanf(" %s", vet[i].nome);

        for (int j = 0; j < 3; j++)
        {
            printf("Digite a compra %d:\n" j + 1);
            scanf("%f", &vet[j].compras);
        }
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("CPF digitado: %d\n", vet[i].CPF);
        printf("Nome digitado: %s\n", vet[i].nome);
        printf("Compras digitado: %f\n", vet[i].compras);
    }
}

int main() {

    int tamanho = 3;

    le_escreve(pessoas, tamanho);

}