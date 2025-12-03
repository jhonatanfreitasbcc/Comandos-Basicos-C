#include <stdio.h>

int main(){

    FILE *arquivo = fopen("JHONATAN.txt", "w");

    if (arquivo == NULL){
        printf("ERRO, IMPOSSIVEL ESCREVER NO ARQUIVO");
    }

    fprintf(arquivo, "jhonatan\n");
    fprintf(arquivo, "25\n");
    fprintf(arquivo, "campo mourão");

    fclose(arquivo);

    return 0;
}
