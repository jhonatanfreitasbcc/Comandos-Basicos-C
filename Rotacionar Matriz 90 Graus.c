#include <stdio.h>

int rotacionarMatriz(int matriz[3][3], int rotacionar[3][3]){
    
    int i;
    int j;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            rotacionar[j][2-i] = matriz[i][j];
        }
    }
    
    return 0;
}

int main(){
    
    int matriz[3][3] = {
        
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };
    
    int i;
    int j;
    int rotacionar[3][3];
    
    rotacionarMatriz(matriz, rotacionar);
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", rotacionar[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
