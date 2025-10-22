#include <stdio.h>

int main(){
    
    int vetor[] = {4, 2, 1, 0, 3, 9, 8, 7};
    int tamanho = 8;
    int i;
    int j;
    int temp;
    
    for (i = 0; i < tamanho - 1; i++){
        for (j = 0; j < tamanho - i - 1; j++){
            if (vetor[j] > vetor[j+1]){
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    
    printf("os vetores em ordem crescente é: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
