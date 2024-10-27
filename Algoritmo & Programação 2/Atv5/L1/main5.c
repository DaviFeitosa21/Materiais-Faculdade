#include <stdio.h>

//Atividade 5

int fibonacci(int fib_n) {
    if (fib_n == 0) {
        return 0;
    } else if (fib_n == 1) {
        return 1;
    } else {
        return fibonacci(fib_n - 1) + fibonacci(fib_n - 2);
    }
}

int main() {
    int fib;
    
    printf("Digite o valor para calcular a sequencia de Fibonacci: ");
    scanf("%d", &fib);
    
    printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", fib, fibonacci(fib));
    
    return 0;
}
