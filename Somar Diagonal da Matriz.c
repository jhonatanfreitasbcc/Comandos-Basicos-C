#include <stdio.h>

int somarDiagonal(int matriz[3][3]){

    int i;
    int soma = 0;

    for (i = 0; i < 3; i++){
        soma += matriz[i][i];
    }

    return soma;
}

int main(){

    int matriz[3][3] = {

        {2, 3, 4},
        {1, 3, 5},
        {6, 7, 9}

    };

   int resultado = somarDiagonal(matriz);

    printf("%d", resultado);

    return 0;
}
