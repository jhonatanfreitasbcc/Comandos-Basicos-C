#include <stdio.h>

int somaNumeros(int numeroA, int numeroB){
    return numeroA - numeroB;
}

int main(){
    int numeroA, numeroB, resultado;
    printf("Digite um numeroA:");
    scanf("%d", &numeroA);
    
    printf("Digite um numeroB:");
    scanf("%d", &numeroB);
    
    resultado = somaNumeros(numeroA, numeroB);
    
    printf("A subtração é: %d\n", resultado);
    
    return 0;
}
