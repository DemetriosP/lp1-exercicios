#include <stdio.h>

int main() {

    float metros, centimetros;

    printf("Informe o numero em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2f metros sao %.2f centimetros", metros, centimetros);

    return 0;
}
