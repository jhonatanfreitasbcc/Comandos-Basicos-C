#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero > 10){
        printf("Aceito");
    } else { 
        printf("Não aceito");
    }
    
    return 0;

}
