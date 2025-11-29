#include <stdio.h>
#include <string.h>

void contarCaracteres(char palavra[100]){
    
    int i = 0;
    int contador = 0;
    
    while (palavra[i] != '\0'){
        contador++;
        i++;
    }
    
    printf("Tamanho da Palavra: %d", contador);
}

int main(){
    
    char texto[100];
    
    printf("Digite a palavra a ser contada o tamanho: ");
    fgets(texto, sizeof(texto), stdin);
    
    texto[strcspn(texto, "\n")] = '\0';
    
    contarCaracteres(texto);
    
    return 0;
    
