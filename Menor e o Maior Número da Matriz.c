#include <stdio.h>

int maiorMenor (int matriz[3][3], int *menor, int *maior){
    
    *menor = matriz[0][0];
    *maior = matriz[0][0];
    
    int i;
    int j;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (matriz[i][j] < *menor){
                *menor = matriz[i][j];
            }
            if ( matriz[i][j] > *maior){
                *maior = matriz[i][j];
            }
        }
    }
    
    return 0;
}

int main(){
    
    int matriz[3][3] = {
        
        {2, 5, 7},
        {1, 2, 3},
        {4, 7, 9}
        
    };
    
    int i;
    int j;
    int menor;
    int maior;
    
    int resultado = maiorMenor(matriz, &menor, &maior);
    
    printf("o menor valor é: %d\n", menor);
    
    printf("o maior valor é: %d", maior);
    
    return 0;
}
