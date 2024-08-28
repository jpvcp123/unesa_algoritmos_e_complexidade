#include <stdio.h>
#include <stdbool.h> 

// Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

bool e_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &numero);

    if (e_primo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
