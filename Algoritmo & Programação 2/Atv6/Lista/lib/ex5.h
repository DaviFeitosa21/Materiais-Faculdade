#ifndef ex5
#define ex5

//Atividade 5

void elementos(int *valor) {
    for (int i = 0; i < 8; i++) {
        if (valor[i] >= 15 && valor[i] <= 20) {
            valor[i] = 0;
        }
    }
}

#endif