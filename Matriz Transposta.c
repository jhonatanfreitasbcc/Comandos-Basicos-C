#include <stdio.h>

int matrizTransposta(int matriz[3][3], int resultado[3][3]){

    int i;
    int j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            resultado[j][i] = matriz[i][j];
        }
    }

    return 0;
}

int main(){

    int matriz[3][3] = {

        {2, 3, 4},
        {1, 2, 3},
        {4, 5, 6}
    };

    int transposta[3][3];
    int i;
    int j;

    matrizTransposta(matriz, transposta);

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", transposta[i][j]);
        }

        printf("\n");
    }

    return 0;
}
