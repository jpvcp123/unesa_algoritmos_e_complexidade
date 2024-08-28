#include <stdio.h>

// Escreva um procedimento que recebe a idade de um nadador por parâmetro e imprima a categoria desse nadador de acordo com a tabela abaixo:
"""
de 5 a 7 anos = Infantil A
de 8 a 10 anos = Infantil B
de 11 a 13 anos = Juvenil A
de 14 a 17 anos = Juvenil B
maiores de 18 anos (inclusive) = adulto 
"""

void verifica_catergoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Idade fora do intervalo válido para nadadores.\n");
    }
}

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    verifica_catergoria(idade);

    return 0;
}
