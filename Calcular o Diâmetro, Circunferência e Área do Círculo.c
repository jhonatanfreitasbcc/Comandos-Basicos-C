#include <stdio.h>

int main(){
    const float PI = 3.141593;
    float r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &r);

    float diametro = 2 * r;
    float circunferencia = 2 * PI * r;
    float area = PI * r * r;
    
    printf("O diametro é: %f\nA circunferencia é: %f\nA area é: %f", diametro, circunferencia, area);

    return 0;

}
