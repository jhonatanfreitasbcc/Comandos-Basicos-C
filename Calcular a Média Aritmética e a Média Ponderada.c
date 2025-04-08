#include <stdio.h>

int main() {
    int a, b, c;
    double media_aritmetica, media_ponderada;

    printf("Digite o numero para a: ");
    scanf("%d", &a);
    printf("Digite o valor para b: ");
    scanf("%d", &b);
    printf("Digite o valor para c: ");
    scanf("%d", &c);

    media_aritmetica = (a + b + c) / 3.0;
    media_ponderada = (a * 1.0 + b * 5.0 + c * 4.0) / (1.0 + 5.0 + 4.0);

    printf("A media aritmetica é: %.2f\n", media_aritmetica);
    printf("A media ponderada é: %.2f\n", media_ponderada);

    return 0;
}
