#include <stdio.h>

int main(){
    char a = 1;
    char b = 2;
    char c = 3;
    char d = 1;
    
    if (a > b && a < c)
    {
        printf("A condicao 1 é verdadeira\n");
    }
    
    if (c == d || d == a )
    {
        printf("A condicao 2 é verdadeira\n");
    }
    else
    {
        printf("Nenhuma condicao é verdadeira\n");
    }
        
        return 0;
        
}
