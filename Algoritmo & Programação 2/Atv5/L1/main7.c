#include <stdio.h>

//Atividade 7

int tribonacci(int trib_n) {
    if (trib_n == 0) {
        return 0;
    } else if (trib_n == 1) {
        return 0;
    } else if (trib_n == 2) {
        return 1;
    } else {
        return tribonacci(trib_n - 1) + tribonacci(trib_n - 2) + tribonacci(trib_n - 3);
    }
}

int main() {
    int trib;

    printf("Digite um valor para o calculo da sequencia de Tribonacci: ");
    scanf("%d", &trib);

    printf("O %d-esimo nemero de Tribonacci e: %d\n", trib, tribonacci(trib));

    return 0;
}