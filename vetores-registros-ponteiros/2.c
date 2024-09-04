#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define NUM_PESSOAS 5

// crie um programa que permita armazenar o nome e a idade de 5 pessoas. cada pessoa deve ser representada por uma struct dentro de um vetor. o nome e a idade de cada pessoa devem ser informados pelo teclado. crie sub-rotinas par facilitar a inserção de dados e a manipulação do vetor

typedef struct {
    char nome[MAX_NOME];
    int idade;
} Pessoa;

void inserirPessoa(Pessoa *p) {
    printf("Digite o nome: ");
    fgets(p->nome, MAX_NOME, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';
    
    printf("Digite a idade: ");
    scanf("%d", &(p->idade));
    while (getchar() != '\n');
}

void exibirPessoa(const Pessoa *p) {
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
}

void exibirPessoas(const Pessoa pessoas[], int numPessoas) {
    for (int i = 0; i < numPessoas; ++i) {
        printf("\nPessoa %d:\n", i + 1);
        exibirPessoa(&pessoas[i]);
    }
}

int main() {
    Pessoa pessoas[NUM_PESSOAS];
    
    for (int i = 0; i < NUM_PESSOAS; ++i) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        inserirPessoa(&pessoas[i]);
        while (getchar() != '\n');
    }

    printf("\nDados das pessoas:\n");
    exibirPessoas(pessoas, NUM_PESSOAS);
    
    return 0;
}
