#include <stdio.h>

int main(){
    
    int i;
    int j;
    int matriz[3][3] = {{2, 4, 5},
                       {2, 4, 6},
                       {2, 5, 7}
    };


for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        printf("%d", matriz[i][j]);
        }
        
        printf("\n");

    }
    
    return 0;
}
