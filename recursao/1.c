#include <stdio.h>

// Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x elevado a n. 

int potencia(int x, int n) {
    if (n == 0)
        return 1;
    return x * potencia(x, n - 1);
}

int main() {
    int x, n;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("%d elevado a %d é: %d\n", x, n, potencia(x, n));
    
    return 0;
}
