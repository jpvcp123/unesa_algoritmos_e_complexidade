#include <stdio.h>
#include <math.h>

//  Faça uma função que recebe por parâmetro o raio de uma esfera e retorne o seu volume (v = 4*PI .R3)/3.

double volume_esfera(double raio) {

    double volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    return volume;
}

int main() {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double volume = volume_esfera(raio);
    if (volume >= 0) {
        printf("O volume da esfera com raio %.2f é %.2f\n", raio, volume);
    }

    return 0;
}
