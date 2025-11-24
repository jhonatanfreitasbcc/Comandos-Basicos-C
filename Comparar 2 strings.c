#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra1[50];
    char palavra2[50];
    
    printf("Digite a primeira palavra: ");
    scanf("%s", &palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", &palavra2);
    
    if (strcmp(palavra1, palavra2) == 0) {
        printf("Palavra iguais");
    } else {
        printf("Palavras diferentes");
    }
    
    return 0;
    
    
}
