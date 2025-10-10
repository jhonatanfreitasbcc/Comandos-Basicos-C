#include <stdio.h>

int main(){
    
    int vetor[] = {2,3, 6, 7, 9};
    int tamanho = 5;
    int i;
    
    printf("os numeros pares são: ");
    
    for (i = 0; i < tamanho; i++){
        if (vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }
    
    return 0;
}
