#include <stdio.h>

struct HORAS
{
    int horas, minutos;
}HORA;

#include "lib/libHora.h"

int main()
{
    int horaValida, minutoValido;

    do
    {
        horaValida = 1;
        minutoValido = 1;

        printf("\nDigite um horario:(horas/minutos)\n");
        scanf("%d %d", &HORA.horas, &HORA.minutos);

        if (HORA.horas < 0 || HORA.horas > 23)
        {
            printf("Horas inválidas!");
            horaValida = 0;
        }
        else if(HORA.minutos < 0 || HORA.minutos > 59)
        {
            printf("Minutos inválidos!");
            minutoValido = 0;
        }
        
    } while (!horaValida || !minutoValido);

    printf("Tempo digitado: %02d:%02d\n", HORA.horas, HORA.minutos);

    saudacao();

}
