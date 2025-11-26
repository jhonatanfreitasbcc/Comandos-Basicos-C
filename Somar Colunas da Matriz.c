#include <stdio.h>

int somarColunas(int matriz[3][3], int somaC[3]){
    
    int i;
    int j;
    
    for (j = 0; j < 3; j++){
        somaC[j] = 0;
        for (i = 0; i < 3; i++){
            somaC[j] += matriz[i][j];
        }
    
    }
    
}

int main(){
    
    int matriz[3][3] = {
        
        {2, 3, 5},
        {3, 4, 5},
        {1, 2, 3}
        
    };
    
    int j;
    int somaC[3];
    
    somarColunas(matriz, somaC);
    
    for (j = 0; j < 3; j++){
        printf("%d ", somaC[j]);
    }
    
    return 0;
}

