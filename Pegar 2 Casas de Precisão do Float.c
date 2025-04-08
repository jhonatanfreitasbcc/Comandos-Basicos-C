#include <stdio.h>

int main(){
    float numero;

    printf("Digite o numero float: ");
    scanf("%f", &numero);

    printf("O numero escolhido com 2 casas de precisão é: %.2f", numero);

    return 0;
}
