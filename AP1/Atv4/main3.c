#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float vReal, vDolar, convertDolar;

    printf("Informe o valor em Reais: R$");
    scanf("%f", &vReal);

    printf("Informe o valor da cotacao do Dolar: $");
    scanf("%f", &vDolar);

    convertDolar = vReal * vDolar;

    printf("Valor total em Dolar: $%.2f\n", convertDolar);
    printf("OBS: Deve ser informado todas as casas decimais para maior precisao no valor da conversao");

    return 0;
}