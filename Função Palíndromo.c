#include <string.h>
#include <stdio.h>

int ehPalindromo(char texto[]){
    
    int inicio = 0;
    int fim = 0;
    
    while (texto[fim] != '\0'){
        fim++;
    }
    fim--;
    
    while (inicio < fim){
        if (texto[inicio] != texto[fim]){
            return 0;
        }
        
        inicio++;
        fim--;
    }
    
    return 1;
}

int main(){
    
    char palavra[50];
    
    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    palavra[strcspn(palavra, "\n")] = 0;
    
    ehPalindromo(palavra);
    
    if (ehPalindromo(palavra)){
        printf("PALINDROMO");
    } else {
        printf("NÃO PALINDROMO");
    }
    
    return 0;
}










