#include <stdio.h>

int main() {
    
    int vetor[] = {2, 5, 6, 7, 8, 10};
    int tamanho = 6;
    int i;
    int soma = 0;
    
    for (i = 0; i < tamanho; i++) {
        if (i >= 3 && i <= 6) { 
            soma += vetor[i];
        }
    }
    
    printf("A soma dos 3 ultimos numeros do vetor é: %d\n", soma);
    
    return 0;
}
