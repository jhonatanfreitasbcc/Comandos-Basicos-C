#include <stdio.h>

int fibonacci (int n){
    
    if (n == 1){
        return 1;
    } else if (n == 0){
        return 0;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    return 0;
}

int main(){
    
    int n = 9;
    int f = fibonacci(n);
    
    printf("%d", f);
    
    return 0;
}
