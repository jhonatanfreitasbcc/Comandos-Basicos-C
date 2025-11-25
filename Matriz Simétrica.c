#include <stdio.h>

int matrizSimetrica(int matriz[3][3]){
    
    int i;
    int j;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (matrizSimetrica[i][j] != matriz[j][i]){
                return 0;
            }
            
        }
    }
    
    return 1;
}

int main(){
    
    int matriz[3][3] = {
        
        {2, 4, 6},
        {3, 5, 7},
        {1, 8, 9}
        
    };
    
    int resultado = matrizSimetrica(matriz);
    
    printf("%d ", resultado);
    
    return 0;
}




