#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    srand(time(NULL));
    int numero_aleatorio = rand() % 13;
    printf("%d", numero_aleatorio);
    return 0;
}
