#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Digite um numero para a: ");
    scanf("%d", &a);
    printf("Digite um numero para b: ");
    scanf("%d", &b);

    int resto = a % b;

    printf("o resto da divisao %d por %d é: %d\n", a, b, resto);

    return 0;
    
}
