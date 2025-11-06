#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bhaskara(float a, float b, float c, float *x1, float *x2){

    float delta;

    delta = (b * b) - (4 * a * c);

    if (delta < 0){
        *x1 = *x2 = 0;
        printf("Nenhuma raiz real.\n");
        return 0;
    }
    else if (delta == 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = *x1;
        printf("Possui 1 raiz real.\n");
        return 1;
    }
    else{
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Possui 2 raízes reais.\n");
        return 2;
    }
}
