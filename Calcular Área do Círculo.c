#include <stdio.h>

float areaCirculo(float pI, float r){
    float area = pI * r * r;
    return area;
}

int main(){

    float pi;
    float raio;
    float area;

    printf("Digite o valor do pi: ");
    scanf("%f", &pi);
    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = areaCirculo(pi, raio);
    
    printf("a area total do circulo é: %f", area);

    return 0;
}
