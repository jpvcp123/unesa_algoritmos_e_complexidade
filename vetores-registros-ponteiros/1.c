#include <stdio.h>
#include <stdlib.h>

// crie um procedimento que receba um vetor de inteiros como parâmetro e imprima-o assim: [10,23,-19,2]

void imprimirVetor(int vetor[], int tamanho) {

    printf("[");
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        
        if (i < tamanho - 1) {
            printf(",");
        }
    }
    
    printf("]\n");
}

int main() {
    int tamanho;
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &tamanho);
    
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }
    
    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    imprimirVetor(vetor, tamanho);
    
    free(vetor);
    
    return 0;
}
