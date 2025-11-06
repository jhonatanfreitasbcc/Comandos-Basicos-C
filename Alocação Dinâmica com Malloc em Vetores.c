#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *vetor;
    vetor = (int *) malloc(5 * sizeof(int));
    
    for (int i = 0; i < 5; i++){
        vetor[i] = i * 10;
    }
    
    for (int i = 0; i < 5; i++){
        printf("vetor é: %d\n", vetor[i]);
    }
    
    free(vetor);
    vetor = NULL;
    return 0;
}
