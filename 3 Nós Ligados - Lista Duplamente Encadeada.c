#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    
    int dado;
    struct No *ant;
    struct No *prox;
}No;

int main(){
    
    No *n1 = (No*)malloc(sizeof(No));
    No *n2 = (No*)malloc(sizeof(No));
    No *n3 = (No*)malloc(sizeof(No));
    
    n1->dado = 10;
    n2->dado = 20;
    n3->dado = 30;
    
    n1->ant = NULL;
    n1->prox = n2;
    
    n2->ant = n1;
    n2->prox = n3;
    
    n3->ant = n2;
    n3->prox = NULL;
    
    
    printf("os valores em ordem crescente são: \n");
    printf("%d %d %d\n", n1->dado, n2->dado, n3->dado);
    
    printf("os valores em ordem decrescente são: \n");
    printf("%d %d %d\n", n3->dado, n2->dado, n1->dado);
    

    free(n1);
    free(n2);
    free(n3);
    
    return 0;
    
    
}
