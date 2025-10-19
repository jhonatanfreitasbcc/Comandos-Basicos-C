#include <stdio.h>

int dobroNumero(int n){
    int numero = n * 2;
    return numero;
}

int main(){
    
    int numeroDuplicado;
    int numeroDobro;
    
    printf("Digite o numero para saber o dobro: ");
    scanf("%d", &numeroDuplicado);
    
    numeroDobro = dobroNumero(numeroDuplicado);
    
    printf("o dobro do numero digitado é de: %d", numeroDobro);
    
    return 0;
}
