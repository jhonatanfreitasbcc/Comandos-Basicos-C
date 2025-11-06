#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float r, float *area, float *volume) {
    float pi = 3.1415;

    if (r <= 0) {
        printf("Erro: impossível calcular, raio inválido.\n");
        return;
    }

    *area = 4 * pi * (r * r);
    *volume = (4.0 / 3.0) * pi * (r * r * r);
}
