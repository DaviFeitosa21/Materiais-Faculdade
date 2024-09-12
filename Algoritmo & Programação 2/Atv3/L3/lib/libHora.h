#ifndef libHora
#define libHora

void saudacao()
{
    if(HORA.horas >= 6 && (HORA.horas < 12 || (HORA.horas == 12 && HORA.minutos == 0)))
    {
        printf("Bom dia!");
    }
    else if((HORA.horas == 12 && HORA.minutos > 0) || (HORA.horas > 12 && HORA.horas < 18) || (HORA.horas == 18 && HORA.minutos == 0))
    {
        printf("Boa tarde!");
    }
    else if((HORA.horas == 18 && HORA.minutos > 0) || (HORA.horas < 6 || HORA.horas > 18))
    {
        printf("Boa noite!");
    }
    else
    {
        printf("Data invalida");
    }
}

#endif