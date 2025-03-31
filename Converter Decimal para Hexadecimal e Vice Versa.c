#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    int valor;
    
    printf("Conversor Bases Numéricas \n");
    printf("1: Decimal para Hexadecimal \n");
    printf("2: Hexadecimal para Decimal \n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);
    getchar();
    
    if (opcao == 1)
    {
        printf("\nInformar o valor de decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em Hexadecimal é: %x", valor, valor);
    }
    else if (opcao == 2)
    {
        printf("\nInformar o valor em Hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal é : %d", valor, valor );
    }
    
    else printf("\nSua opcao é invalida. ");
    
    return 0;
    
}
