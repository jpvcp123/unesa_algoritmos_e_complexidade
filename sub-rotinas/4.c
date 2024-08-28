#include <stdio.h>

// Um caixa eletrônico possui notas de: R$ 50,00 R$ 20,00 R$ 10,00 R$ 5,00 . Escreva um procedimento que receba o valor em dinheiro e imprima quantas notas de cada deve ser fornecida para o cliente, ao realizar um saque de um determinado valor.


void fornecer_notas(int valor) {

    int notas_50 = valor / 50;
    valor %= 50;
    int notas_20 = valor / 20;
    valor %= 20;
    int notas_10 = valor / 10;
    valor %= 10;
    int notas_5 = valor / 5;
    valor %= 5;

    if (notas_50 > 0) {
        printf("Notas de R$ 50,00: %d\n", notas_50);
    }
    if (notas_20 > 0) {
        printf("Notas de R$ 20,00: %d\n", notas_20);
    }
    if (notas_10 > 0) {
        printf("Notas de R$ 10,00: %d\n", notas_10);
    }
    if (notas_5 > 0) {
        printf("Notas de R$ 5,00: %d\n", notas_5);
    }
    if (valor > 0) {
        printf("Não é possível fornecer o valor restante de R$ %d com as notas disponíveis.\n", valor);
    }
}

int main() {
    int valor;

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%d", &valor);

    fornecer_notas(valor);

    return 0;
}
