#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    
    printf("Digite o numero1: ");
    scanf("%d", &numero1);
    getchar();
    printf("Digite outro numero2: ");
    scanf("%d", &numero2);
    getchar();
    int adicao = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int divisao = numero1 / numero2;
    int multiplicacao = numero1 * numero2;
    
    printf("a soma dos numeros é: %d", adicao );
    printf(" a subtracao dos numeros é: %d", subtracao);
    printf(" a divisao dos numeros é: %d", divisao);
    printf(" a multiplicacao dos numeros é: %d", multiplicacao);
    
    return 0;
    
    
}
