#include <stdio.h>

struct Pessoa{
    
    char nome[100];
    char curso[100];
    int ra;
};

int main(){
    struct Pessoa aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Digite o nome do curso do estudante: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);

    printf("Digite a RA do estudante: ");
    scanf("%d", &aluno.ra);

    
    printf("Nome do Estudante: %s", aluno.nome);
    printf("Nome do Curso do Estudante: %s", aluno.curso);
    printf("Número do RA do Estudante: %d", aluno.ra);
    
    return 0;
}
