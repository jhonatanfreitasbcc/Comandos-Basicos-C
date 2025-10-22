#include <stdio.h>

int maiorNumero(int a, int b){
    if (a < b){
        return b;
    } else{
        return a;
    }
}

int main(){
    
    int numeroA;
    int numeroB;
    
    printf("Digite um numero para A: ");
    scanf("%d", &numeroA);
    printf("Digite um numero para B: ");
    scanf("%d", &numeroB);
    
    int maior = maiorNumero(numeroA, numeroB);
    
    printf("o maior valor é: %d", maior);
    
    return 0;
}
