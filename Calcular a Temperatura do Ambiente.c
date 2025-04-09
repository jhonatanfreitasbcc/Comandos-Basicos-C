#include <stdio.h>

int main(){
    float temperatura;

    printf("Digite sua Temperatura Ambiente: ");
    scanf("%f", &temperatura);
    getchar();

    if (temperatura <= 5)
    {
        printf("Muito Frio\n");
    }
    else if (temperatura > 5 && temperatura <= 15)
    {
        printf("Está um Pouco Frio\n");
    }
    else if (temperatura > 15 && temperatura <= 25)
    {
        printf("Frio\n");
    }
    else if (temperatura > 25 && temperatura <= 35)
    {
        printf("Esta Calor\n");
    }
    else if (temperatura > 35 && temperatura <= 40)
    {
        printf("Muito Quente\n");
    }
    else
    {
        printf("Está Muito Quente\n");
    }

    return 0;
    
}
