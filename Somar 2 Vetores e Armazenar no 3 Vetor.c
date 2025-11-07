#include <stdio.h>
#include <stdlib.h>

void somaVetor(int *vet1, int *vet2, int *vet3, int tam1, int tam2){

    if (tam1 != tam2){
        printf("Erro, tamanho incompativel");
        return;
    }

    for (int i = 0; i < tam1; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nVetor Resultante");
    for (int i = 0; i < tam1; i++){
        printf("%d", vet3[i]);
    }
}

int main(){

    int maior;
    int tam1;
    int tam2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    if (tam1 > tam2){
        maior = tam1;
    } else {
        maior = tam2;
    }

    int *vet1 = (int*)malloc(tam1 * sizeof(int));
    int *vet2 = (int*)malloc(tam2 * sizeof(int));
    int *vet3 = (int*)malloc(maior * sizeof(int));

    if (vet1 == NULL || vet2 == NULL || vet3 == NULL){
        printf("Erro ao alocar memoria");
    }

    printf("\nDigite os elementos do primeiro vetor: ");
    
    for (int i = 0; i < tam1; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor: ");

    for (int i = 0; i < tam2; i++){
        scanf("%d", &vet2[i]);
    }

    somaVetor(vet1, vet2, vet3, tam1, tam2);

    free(vet1);
    free(vet2);
    free(vet3);
    vet1 = NULL;
    vet2 = NULL;
    vet3 = NULL;

    return 0;


}
