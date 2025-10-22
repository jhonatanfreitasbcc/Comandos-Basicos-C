#include <stdio.h>

int entreValores(int valor, int inferior, int superior){
    if (valor >= inferior && valor <= superior){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    
    int numero;
    int numeroInferior;
    int numeroSuperior;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Digite o numero Inferior: ");
    scanf("%d", &numeroInferior);
    printf("Digite o numero Superior: ");
    scanf("%d", &numeroSuperior);
    
    int estaEntre = entreValores(numero, numeroInferior, numeroSuperior);
    
    if (entreValores){
        printf("o valor esta entre o inferior e superior");
    } else{
        printf("o valor nao esta entre o inferior e superior");
    }
    
    return 0;
}
