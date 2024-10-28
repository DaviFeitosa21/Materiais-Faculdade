#include <stdio.h>
#include "lib/ex5.h"

//Atividade 5

int main() {
    int num[8] = {8, 17, 12, 15, 18, 20, 24, 25};

    printf("Vetor sem ateracao:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", num[i]);
    }
    
    elementos(&num);

    printf("\nVetor alterado:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", num[i]);
    }
}