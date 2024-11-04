#include <stdio.h>

struct ALUNO {
    int matricula;
    float nota;
}a;

int main() {

    struct ALUNO *pa = &a;

    pa->matricula = 22;


    int v[3] = {10, 23, 12};
    int *pv;
    pv = v;

    printf("%d, %d, %d", *pv, *(pv+1), *(pv+2));

}