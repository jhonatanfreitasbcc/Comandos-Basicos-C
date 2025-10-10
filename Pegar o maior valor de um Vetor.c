#include <stdio.h>

int main(){
    
    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = 5;
    int i;
    int maior = vetor[0];
    
    for (i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    printf("o maior vetor é: %d\n", maior);
    
    return 0;
}
