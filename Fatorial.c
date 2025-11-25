#include <stdio.h>

int fatorial(int n){
    
    if (n == 1 || n == 0){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
    
    return 0;
}

int main(){
    
    int n = 5;
    int f = fatorial(n);
    
    printf("%d", f);
    
    return 0;
}
