#include <stdio.h>
#include <stdlib.h>

int main() {

    float notaAluno, percentFaltas;
    int freqAluno;

    // 1 ano letivo = 225 dias

    printf("Informe a nota do aluno: ");
    scanf("%f", &notaAluno);

    printf("Informe a quantidade de faltas do aluno: ");
    scanf("%d", &freqAluno);

    percentFaltas = ((float)freqAluno / 225) * 100;

    if(notaAluno >= 7 && percentFaltas < 25) {
        printf("Aluno aprovado!");
    }
    else {
        printf("Aluno reprovado!");
    }

    return 0;    

}