#include <stdio.h>
#include <string.h>

struct DMA
{
    int dia, mes, ano;
}DMA;

int main()
{
    int totDia, totMes, totAno, dataValida;

    struct DMA dma, dma2;

    do
    {
        dataValida = 1;

        printf("\nDigite a data inicial:(dia/mes/ano)\n");
        scanf("%d %d %d", &dma.dia, &dma.mes, &dma.ano);

        printf("\nDigite a data final:(dia/mes/ano)\n");
        scanf("%d %d %d", &dma2.dia, &dma2.mes, &dma2.ano);

        if (dma.dia < 1 || dma.dia > 31)
        {
            dataValida = 0;
        }
        else if(dma.mes < 1 || dma.mes > 12)
        {
            dataValida = 0;
        }
        else if(dma.ano > dma2.ano)
        {
            dataValida = 0;
        }

        if (!dataValida)
        {
            printf("Data invalida, digite novamente!");
        }
    } while (!dataValida);
    
    if (dma.dia > dma2.dia)
    {
        totAno = dma2.ano - dma.ano - 1;
        totDia = dma2.dia - dma.dia + 31;
    }
    else
    {
        totDia = dma2.dia - dma.dia;
        totAno = dma2.ano - dma.ano;
    }
    
    if (dma.mes > dma2.mes)
    {
        totMes = dma2.mes - dma.mes + 12;
    }
    else
    {
        totMes = dma2.mes - dma.mes;
    }

    printf("\nO tempo decorrido entre as duas datas e: %d dias, %d meses e %d anos.\n", totDia, totMes, totAno);
}