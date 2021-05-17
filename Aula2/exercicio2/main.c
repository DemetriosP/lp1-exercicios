#include <stdio.h>

int main() {

    float altura, raio, volumeCilindro;
    const float pi = 3.141592;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    volumeCilindro = pi * raio * raio * altura;

    printf("O volume do cilindro e %.2f", volumeCilindro);

    return 0;

}
