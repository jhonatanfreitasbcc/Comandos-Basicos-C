#include <stdio.h>

float somaNumeros(float numeroA, float numeroB){
    return numeroA / numeroB;
}

int main(){
    float numeroA, numeroB, resultado;
    printf("Digite um numeroA:");
    scanf("%f", &numeroA);
    
    printf("Digite um numeroB:");
    scanf("%f", &numeroB);
    
    resultado = somaNumeros(numeroA, numeroB);
    
    printf("A Divisão é: %f\n", resultado);
    
    return 0;
}
