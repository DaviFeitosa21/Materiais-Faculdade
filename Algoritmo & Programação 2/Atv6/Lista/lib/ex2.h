#ifndef ex2
#define ex2

//Atividade 2

void crip(char *p, char v, int tam) {
    for (int i = 0; i < tam; i++) {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u') {
            p[i] = v;
        }
    }
}

#endif