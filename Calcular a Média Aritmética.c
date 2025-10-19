#include <stdio.h>

float mediaAritmetica(float a, float b){
    float media = (a + b) / 2;
    return media;
}

int main(){
    
    float notaA;
    float notaB;
    float mediaTotal;
    
    printf("Digite a notaA: ");
    scanf("%f", &notaA);
    printf("Digite a notaB: ");
    scanf("%f", &notaB);
    
    mediaTotal = mediaAritmetica(notaA, notaB);
    
    printf("a media total foi: %f", mediaTotal);
    
    return 0;
}
