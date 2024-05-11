#include <stdio.h>
#include <stdlib.h>

int main() {

    float vProd, vDesc, vTotal;
    char escolhaDesc;

    printf("Informe o valor do produto: R$");
    scanf("%f", &vProd);

    printf("Deseja aplicar desconto neste produto?(s/n)\n");
    scanf(" %c", &escolhaDesc);

    if(escolhaDesc == 's'){
        printf("Informe o valor do desconto: R$");
        scanf("%f", &vDesc);

        if(vDesc > vProd){
            printf("Valor do desconto nao pode ser maior que o valor do produto.");
        }
        else{
            vTotal = vProd - vDesc;
            printf("Valor total do produto com R$%.2f de desconto aplicado: R$%.2f", vDesc, vTotal);
        }
    }
    else if(escolhaDesc == 'n'){
        printf("Valor total do produto sem descontos: R$%.2f", vProd);
    }
    else{
        printf("Opcao de escolha nao e valida!");
    }

    return 0;
}