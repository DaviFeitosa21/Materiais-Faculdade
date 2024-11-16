#include <stdio.h>

int main() {
    int i = 3, j = 5;

    int *p, *q;

    p = &i;

    q = &j;

    printf("%d", *p/(*q)+7);
}