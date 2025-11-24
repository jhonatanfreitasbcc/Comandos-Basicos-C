#include <string.h>
#include <stdio.h>

int main(){
    
    char palavra[50];
    char palavra2[50];
    
    printf("Digite a palavra 1: ");
    scanf("%s", palavra);
    
    printf("Digite a palavra 2: ");
    scanf("%s", palavra2);
    
    strcpy(palavra, palavra2);
    
    printf("a palavra é: %s", palavra);
    
    return 0;
}
