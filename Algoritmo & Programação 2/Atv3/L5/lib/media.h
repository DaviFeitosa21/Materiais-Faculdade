#ifndef media.h
#define media.h

float mediaAritmetica() 
{
    return (nota1 + nota2 + nota3) / 3.0;
}

float mediaPonderada() 
{
    float soma_pesos = 5 + 3 + 2;
    return (nota1 * 5 + nota2 * 3 + nota3 * 2) / soma_pesos;
}

#endif