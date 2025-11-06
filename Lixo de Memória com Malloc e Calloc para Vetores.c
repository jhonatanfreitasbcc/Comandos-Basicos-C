#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *vet;
    int *vet2;
    
    vet = malloc(2 * sizeof(int));
    vet2 = calloc(2, sizeof(int));
    
    for(int i = 0; i < 2; i++){
        printf("%d ", vet[i]);
    }
    
    for (int i = 0; i < 2; i++){
        printf("%d ", vet2[i]);
    }
    
    return 0;
}
