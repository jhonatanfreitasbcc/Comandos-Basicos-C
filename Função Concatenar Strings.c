#include <stdio.h>
#include <string.h>


void tiraEspaco(char texto[]){
    texto[strcspn(texto, "\n")] = '\0';
}

void juntarPalavra(char destino[], char origem[]){
    
    int i = 0;
    int j = 0;
    
    while (destino[i] != '\0'){
        i++;
    }
    destino[i] = ' ';
    i++;
    
    while (origem[j] != '\0'){
        destino[i] = origem[j];
        i++;
        j++;
    }
    
    destino[i] = '\0';
}

int main(){
    
    char texto[100];
    char texto2[100];
    
    printf("Digite o primeiro texto: ");
    fgets(texto, sizeof(texto), stdin);
    tiraEspaco(texto);

    printf("Digite o segundo texto: ");
    fgets(texto2, sizeof(texto2), stdin);
    tiraEspaco(texto2);
    
    juntarPalavra(texto, texto2);
    
    printf("%s", texto);
    
    return 0;
}
