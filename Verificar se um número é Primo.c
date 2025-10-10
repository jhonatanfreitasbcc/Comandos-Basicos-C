#include <stdio.h>

int ehPrimo(int n){
    if (n <= 1){
        return 0;
    }
    
    for ( int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (ehPrimo(numero)){
        printf("%d É numero primo", numero);
    } else {
        printf("%d Não é numero primo", numero);
    }
    
    return 0;
}
