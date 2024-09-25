#include <stdio.h>

//  Usando recursividade, calcule a soma de todos os valores de um array de valores numéricos.

int somaArray(int arr[], int tamanho) {
    if (tamanho == 0)
        return 0;
    return arr[tamanho - 1] + somaArray(arr, tamanho - 1);
}

int main() {
    int arr[] = {5, 5, 5, 5, 5}; 
    int tamanho = sizeof(arr) / sizeof(arr[0]); 
    
    int soma = somaArray(arr, tamanho);
    
    printf("A soma dos elementos do array é: %d\n", soma);
    
    return 0;
}
