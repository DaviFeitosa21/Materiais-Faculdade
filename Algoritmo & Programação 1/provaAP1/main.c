#include <stdio.h>
#include <stdlib.h>

int main() {

    float vCompra, vDesconto, vTotal;
    int percentDesc;
    char opcDesconto;

    printf("====Site de Compras====\n\n");
    printf("Digite o valor total da compra: R$");
    scanf("%f", &vCompra);

    if(vCompra >= 0) {

        printf("\n====Cupons de Desconto====\n");
        printf("Opcoes disponiveis:\n");
        printf("A: 10%%\nB: 20%%\nC: 30%%\nD: 40%%\nE: 50%%\n");
        printf("Digite a opcao aqui: ");
        scanf(" %c", &opcDesconto);

        printf("\n===============================================\n");
        

        switch (opcDesconto) {

            case 'A':
                percentDesc = 10;
                vDesconto = (vCompra * 10) / 100;
                vTotal = vCompra - vDesconto;
                break;

            case 'B':
                percentDesc = 20;
                vDesconto = (vCompra * 20) / 100;
                vTotal = vCompra - vDesconto;
                break;

            case 'C':
                percentDesc = 30;
                vDesconto = (vCompra * 30) / 100;
                vTotal = vCompra - vDesconto;
                break;

            case 'D':
                percentDesc = 40;
                vDesconto = (vCompra * 40) / 100;
                vTotal = vCompra - vDesconto;
                break;

            case 'E':
                percentDesc = 50;
                vDesconto = (vCompra * 50) / 100;
                vTotal = vCompra - vDesconto;
                break;
            
            default:
                printf("Opcao de desconto nao identificada!\n");
                printf("A opcao de desconto deve ser digita em letra maiuscula!");
                return 0;
                break;
        }

        printf("\n===================\n");
        printf("===Cumpom Fiscal===\n");
        printf("===================\n");
        printf("Valor da compra: R$%.2f\n", vCompra);
        printf("Opcao de cupom selecionada: %c (%d%%)\n", opcDesconto, percentDesc);
        printf("Valor do desconto: R$%.2f\n", vDesconto);
        printf("Valor total da compra com %d%% de desconto aplicado: R$%.2f", percentDesc, vTotal);

    }
    else {
        printf("Valor da compra nao pode ser menor que 0");
    }

    return 0;

}