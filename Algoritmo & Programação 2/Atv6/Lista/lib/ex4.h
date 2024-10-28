#ifndef ex4
#define ex4

void ord_num(float *num) {
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (*(num + j) > *(num + j + 1)) {
                float temp = *(num + j);
                *(num + j) = *(num + j + 1);
                *(num + j + 1) = temp;
            }
        }
    }
}

#endif