#include <stdio.h>

int main(){
    int a=0, b=0, c=0, d=0;
    
    a++;
    
    b--;
    
    c += a;
    
    d -= c;
    
    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
    
    return 0;
}
