#include <stdio.h>

//Atividade 4

long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

long long fatorial_quadruplo(int n) {
    return fatorial(2 * n) / fatorial(n);
}

int main() {
    int n;
    
    printf("Digite um valor para N: ");
    scanf("%d", &n);
    
    long long resultado = fatorial_quadruplo(n);
    printf("O resultado do fatorial quadruplo de %d e: %lld\n", n, resultado);
    
    return 0;
}
