#include <stdio.h>
#include <string.h>

struct HORARIO
{
    int horas;
    int minutos;
    int segundos;
}H;

struct DATA
{
    int dia;
    int mes;
    int ano;
}D;

struct AGENDA
{
    struct HORARIO horarios;
    struct DATA datas;
    char descricao[100];
}A;

int main()
{
    int dataValida;
    int horarioValido;

    printf("\n===========Agenda Virtual===========\n");
    do
    {
        horarioValido = 1;

        printf("Informe o horario: (horas/minutos/segundos)\n");
        scanf("%d %d %d", &A.horarios.horas, &A.horarios.minutos, &A.horarios.segundos);

        if (A.horarios.horas < 0 || A.horarios.horas > 23)
        {
            horarioValido = 0;
        }
        else if(A.horarios.minutos < 0 || A.horarios.minutos > 59)
        {
            horarioValido = 0;
        }
        else if(A.horarios.segundos < 0 || A.horarios.segundos > 59)
        {
            horarioValido = 0;
        }

        if(!horarioValido)
        {
            printf("Informe um horario valido!\n");
        }
    } while (!horarioValido);
    
    do
    {
        dataValida = 1;

        printf("Informe a data: (dia/mes/ano)\n");
        scanf("%d %d %d", &A.datas.dia, &A.datas.mes, &A.datas.ano);

        if (A.datas.dia < 1 || A.datas.dia > 31)
        {
            dataValida = 0;
        }
        else if(A.datas.mes < 1 || A.datas.mes > 12)
        {
            dataValida = 0;
        }

        if (!dataValida)
        {
            printf("Data invalida! Tente novamente.\n");
        }
    } while(!dataValida);
    
    printf("Abaixo informe a anotacao:\n");
    scanf(" %s", A.descricao);

    printf("\n\n===========Informacoes atualizadas da agenda===========\n");
    printf("Data do compromisso: %d/%d/%d as %d:%d:%d\n", A.datas.dia, A.datas.mes, A.datas.ano, A.horarios.horas, A.horarios.minutos, A.horarios.segundos);
    printf("Descricao:\n%s\n", A.descricao);
}