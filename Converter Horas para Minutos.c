#include <stdio.h>

int conversaoHoras(int horas){
    int horasMinutos = horas * 60;
    return horasMinutos;
}

int main(){
    
    int h;
    int minutos;
    
    printf("Digite a hora a ser convertido para minutos: ");
    scanf("%d", &h);
    
    minutos = conversaoHoras(h);
    
    printf("horas para minutos é: %d minutos  ", minutos);
    
    return 0;
}
