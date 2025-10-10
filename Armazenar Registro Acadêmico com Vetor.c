#include <stdio.h>

int main(){
    
    int i;
    int tamanho;
    int ra[7];
    
    printf("Digite quantos digítos tem o seu RA: ");
    scanf("%d", &tamanho);
    
    for (i = 0; i < tamanho; i++){
        printf("Digíto %d: ", i+1);
        scanf("%d", &ra[i]);
    }
    
    for (i = 0; i < tamanho; i++){
        printf("%d", ra[i]);
    }
    
    return 0;
}
