#include <stdio.h>
#include <string.h>

int main(){
    
    int i;
    int j;
    char palavra[20] = "jhonatan";
    int tamanho = strlen(palavra);
    
    for (i = 0; i < tamanho; i++){
        for (j = 0; j < i; j++){
            printf(" ");
        }
        
        printf("%s\n", palavra);
    }
    
    return 0;
}
