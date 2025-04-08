#include <stdio.h>

int main(){
    float numero;

    printf("Digite um numero inteiro: ");
    scanf("%f", &numero);

    printf("O numero convertido para notacao cientifica é: %e ", numero);

    return 0;
}
