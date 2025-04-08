#include <stdio.h>

int main() {
    int dias;
    int anos; 
    int semanas;
    int dias_restantes;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias_restantes = dias % 365;

    semanas = dias_restantes / 7;
    dias_restantes = dias_restantes % 7;

    printf("%d dia(s) = %d ano(s), %d semana(s) e %d dia(s)\n", dias, anos, semanas, dias_restantes);

    return 0;
}
