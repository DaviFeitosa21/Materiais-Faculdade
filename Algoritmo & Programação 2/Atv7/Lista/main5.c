#include <stdio.h>

int main() {
    int i = 7; // DECLARAÇÃO DA VARIAVEL I QUE RECEBE 7 COMO VALOR
    
    int j = 3; // DECLARAÇÃO DA VARIAVEL J QUE RECEBE 3 COMO VALOR
    
    int c; // DECLARAÇÃO DA VARIAVEL C

    int *p; // DECLARAÇÃO DO PONTEIRO P

    int **r; // DECLARAÇÃO DO PONTEIRO R

    p = &i; // P RECEBE O ENDEREÇO DE MEMÓRIA DE I

    r = &p; // R RECEBE O ENDEREÇO DE MEMÓRIA DE P

    c = **r + j; // C RECEBE O PONTEIRO DE R(QUE APONTA PARA O ENREDEÇO DE P(QUE APONTA O PARA O ENDEREÇO DE I))

    printf("%d", c); // EXIBIÇÃO DO VALOR DE C
}