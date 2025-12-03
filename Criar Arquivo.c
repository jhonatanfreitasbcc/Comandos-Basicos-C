#include <stdio.h>

int main(){

    FILE *arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL){
        printf("ERRO AO CRIAR ARQUIVO!\n");
        return 1;
    }
    printf("ARQUIVO 'alunos.txt' CRIADO COM SUCESSO!\n");

    fclose(arquivo);

    return 0;
}
