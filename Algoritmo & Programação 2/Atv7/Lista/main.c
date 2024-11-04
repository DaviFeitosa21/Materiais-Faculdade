//Atividade 1

#include <stdio.h>

int main() {
    int i = 99; // DECLARAÇÃO DA VARIAVEL I QUE RECEBE 99 COMO VALOR

    int j; // DECLARAÇÃO DA VARIAVEL J

    int *p; // DECLARAÇÃO DO PONTEIRO P

    p = &i; // P IRÁ RECEBER O ENDEREÇO DE MEMÓRIA DE I

    j = *p + 300; // J IRÁ RECEBER O VALOR QUE APONTA O ENDEREÇO DE MEMORIA DE P(QUE ESTÁ APONTANDO PARA O ENDEREÇO DE I) E SOMAR COM O VALOR 300

    printf("%d", j); // EXIBIÇÃO DO VALOR DA VARIAVEL J
}