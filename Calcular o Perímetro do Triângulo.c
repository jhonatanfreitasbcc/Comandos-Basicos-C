#include <stdio.h>

int perimetroTriangulo(int a, int b, int c){
    int perimetro = a + b + c;
    return perimetro;
}

int main(){
    
    int valorA;
    int valorB;
    int valorC;
    int perimetroTotal;
    
    printf("Digite o valorA: ");
    scanf("%d", &valorA);
    printf("Digite o valorB: ");
    scanf("%d", &valorB);
    printf("Digite o valorC: ");
    scanf("%d", &valorC);
    
    perimetroTotal = perimetroTriangulo(valorA, valorB, valorC);
    
    printf("o perimetro total do triangulo foi de : %d", perimetroTotal);
    
    return 0;
}
