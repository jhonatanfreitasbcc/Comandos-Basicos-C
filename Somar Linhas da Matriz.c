#include <stdio.h>

int somarLinhas(int matriz[3][3], int soma[3]){
    
    int i;
    int j;
    
    for (i = 0; i < 3; i++){
        soma[i] = 0;
    
        for (j = 0; j < 3; j++){
            soma[i] += matriz[i][j];
        }
    }
}

int main(){
    
    int matriz[3][3] = {
        
        {2, 3, 4},
        {3, 4, 5},
        {2, 1, 2}
        
    };
    
    int i;
    int somaL[3];
    
    somarLinhas(matriz, somaL);
    
    for (i = 0; i < 3; i++){
        printf("%d\n", i, somaL[i]);
    }
    
    return 0;
    
}
