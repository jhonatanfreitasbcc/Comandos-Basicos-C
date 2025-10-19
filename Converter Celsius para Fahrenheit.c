#include <stdio.h>

float conversaoTemperatura(float celsius){
    float fahrenheit = celsius * 1.8 + 32;
    return fahrenheit;
}

int main(){
    
    float grausCelsius;
    float fahrenheit;
    
    printf("Digite os graus celsius para fazer a conversao: ");
    scanf("%f", &grausCelsius);
    
    fahrenheit = conversaoTemperatura(grausCelsius);
    
    printf("celsius para fahrenheit é: %f", fahrenheit);
    
    return 0;
}
