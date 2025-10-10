#include <stdio.h>

int main(){
    
    int vetor[] = {1, 3, 7, 8, 9};
    int tamanho = 5;
    int i;

    printf("os numeros impares são: ");


    for (i = 0; i < tamanho; i++){
        if (vetor[i] % 2 != 0){
            printf("%d ", vetor[i]);
        }
    }
    
    
    return 0;
}
 
