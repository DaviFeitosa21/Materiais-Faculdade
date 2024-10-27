#include <stdio.h>

//Atividade 1

int somaNaturais(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + somaNaturais(n - 1);
}

int main() {
    int n;

    printf("Digite um numero natural:");
    scanf("%d", &n);

    printf("A soma dos primeiros %d numeros naturais e: %d\n", n, somaNaturais(n));
    return 0;
}

