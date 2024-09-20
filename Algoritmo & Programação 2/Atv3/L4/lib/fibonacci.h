#ifndef FIBONACCI_H
#define FIBONACCI_H

int fibonacci(int n) 
{
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

#endif
