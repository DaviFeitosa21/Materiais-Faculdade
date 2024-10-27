#include <stdio.h>

//Atividade 8

int pell(int n_pell) {
    if (n_pell == 0) {
        return 0;
    } else if (n_pell == 1) {
        return 1;
    } else {
        return 2 * pell(n_pell - 1) + pell(n_pell - 2);
    }
}

int main() {
    int numPell;

    printf("Digite o valor para o calculo: ");
    scanf("%d", &numPell);

    printf("O %d-esimo numero de Pell e: %d\n", numPell, pell(numPell));

    return 0;
}