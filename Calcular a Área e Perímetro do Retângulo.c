#include <stdio.h>

int main(){
    int b;
    int h;

    printf("Digite a medida da base: ");
    scanf("%d", &b);
    printf("Digite a medida da altura: ");
    scanf("%d", &h);

    int perimetro = 2 * (b + h);
    int area = b * h;

    printf("O perimetro do retangulo é: %d\n", perimetro);
    printf("A area do retangulo é: %d\n", area);

    return 0;

}
