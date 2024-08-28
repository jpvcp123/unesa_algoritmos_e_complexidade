#include <stdio.h>

// Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela abaixo:
"""
de 0 a 4.9 = D
de 5 a 6.9 = C
de 7 a 8.9 = B
de 9 a 10 = A
"""

char verifica_conceito(float media) {
    if (media >= 0 && media <= 4.9) {
        return 'D';
    } else if (media >= 5 && media <= 6.9) {
        return 'C';
    } else if (media >= 7 && media <= 8.9) {
        return 'B';
    } else if (media >= 9 && media <= 10) {
        return 'A';
    } else {
        return 'X'; 
    }
}

int main() {
    float media;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media);

    char conceito = verifica_conceito(media);
    if (conceito == 'X') {
        printf("Valor da média inválido. A média deve estar entre 0 e 10.\n");
    } else {
        printf("O conceito do aluno é: %c\n", conceito);
    }

    return 0;
}
