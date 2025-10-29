#include <stdio.h>

struct Pessoa{
    
    char nome[50];
    char curso[50];
    int ra;
    
};

int main(){
    
    struct Pessoa aluno[3];
    int i;
    
    for (i = 0; i < 3; i++){
        printf("Cadastro do aluno %d\n", i + 1);
        
        
        printf("Nome do Aluno: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
    
        printf("Nome do Curso: ");
        fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
    
        printf("Número do RA: ");
        scanf("%d", &aluno[i].ra);
        
        
        getchar();
    
    }
    
    printf("\n========== DADOS DOS ESTUDANTES ==========");
    for (i = 0; i < 3; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s",aluno[i].nome);
        printf("Curso: %s", aluno[i].curso);
        printf("RA: %d\n", aluno[i].ra);
    
    }
    
    return 0;
}
