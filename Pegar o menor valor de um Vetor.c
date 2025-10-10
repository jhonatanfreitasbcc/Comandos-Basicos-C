#include <stdio.h>

int main(){
    
    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = 5;
    int i;
    int menor = vetor[0];
    
    for (i = 1; i < tamanho; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("o menor vetor é: %d\n", menor);
    
    return 0;
}
