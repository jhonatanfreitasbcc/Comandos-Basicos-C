#include <stdio.h>

int volumeCubo(int a){
    int volume = a * a * a;
    return volume;
}

int main(){
    
    int lado;
    int volumeTotal;
    
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);
    
    volumeTotal = volumeCubo(lado);
    
    printf("o volume do cubo é de: %d", volumeTotal);
    
    return 0;
}
