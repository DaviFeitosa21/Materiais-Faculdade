//Atividade 3

#include <stdio.h>

int main() {
    int a = 5; // DECLARAÇÃO DA VARIAVEL A QUE RECEBE 5 COMO VALOR
    
    int b = 12; // DECLARAÇÃO DA VARIAVEL B QUE RECEBE 12 COMO VALOR 

    int *p; // DECLARAÇÃO DO PONTEIRO DE P

    int *q; // DECLARAÇÃO DO PONTEIRO DE Q

    p = &a; // P RECEBE O ENDEREÇO DE MEMÓRIA DE A

    q = &b; // Q RECEBE O ENDEREÇO DE MEMÓRIA DE B

    int c = *p + *q; // DECLARAÇÃO DA VARIAVEL C QUE RECEBE O PONTEIRO DE P(QUE APONTA O ENDEREÇO DE A) E SOMA COM O PONTEIRO DE Q(QUE APONTA O ENDEREÇO DE B)

    printf("%d", c); // EXIBIÇÃO DO VALOR DE C
}