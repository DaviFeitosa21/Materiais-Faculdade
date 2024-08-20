#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade, horas;

    printf("Informe a idade e quantidade de horas de estudos de um aluno:");
    scanf("%i %i", &idade, &horas);

    if(idade < 18 && horas >= 15) {
        printf("Estudante Jovem!");
    }
    else if(idade >= 18 && idade < 25 && horas >= 10) {
        printf("Estudante Adulto!");
    }
    else if(idade >= 25 && horas < 10 && horas >= 5) {
        printf("Estudante Senior!");
    }
    else if(horas < 5) {
        printf("Estudante Desmotivado!");
    }
    else {
        printf("Nao categorizado!");
    }

    return 0;

}