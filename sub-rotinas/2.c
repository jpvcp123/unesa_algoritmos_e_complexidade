#include <stdio.h>

// Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do aluno e se for P, a sua média ponderada (pesos: 5, 3 e 2). A média calculada deverá ser impressa na tela.

void calcular_media(char tipo, double nota1, double nota2, double nota3) {
    double media;

    if (tipo == 'A' || tipo == 'a') {
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("A média aritmética das notas é: %.2f\n", media);
    }

    else if (tipo == 'P' || tipo == 'p') {
        double peso1 = 5.0, peso2 = 3.0, peso3 = 2.0;
        media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
        printf("A média ponderada das notas é: %.2f\n", media);
    }
    else {
        printf("Tipo de média inválido. Use 'A' para média aritmética ou 'P' para média ponderada.\n");
    }
}

int main() {
    double nota1, nota2, nota3;
    char tipo;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite o tipo de média ('A' para aritmética ou 'P' para ponderada): ");
    scanf(" %c", &tipo); 

    calcular_media(tipo, nota1, nota2, nota3);

    return 0;
}
