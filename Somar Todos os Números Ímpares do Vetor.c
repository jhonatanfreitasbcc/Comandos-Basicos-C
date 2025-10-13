#include <stdio.h>

int main(){
    
    int vetor[] = {2, 5, 6, 7, 8, 10};
    int tamanho = 6;
    int i;
    int soma = 0;
    
    for (i = 0; i < tamanho; i++){
        if (vetor[i] % 2 != 0){
            soma += vetor[i];
        }
    }
    
    printf("a soma dos numeros ímpares dentro do vetor sao: %d\n", soma);
    
    return 0;
}
