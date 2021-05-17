#include <stdio.h>

int main() {

    float pesoLatao, pesoCobre, pesoZinco;

    printf("Informe a quantidade de Latao que dever sem produzido: ");
    scanf("%f", &pesoLatao);

    pesoCobre = pesoLatao * 0.7;
    pesoZinco = pesoLatao * 0.3;

    printf("Sera necessario %.2f kilos de cobre e %.2f kilos de zinco para se produzir %.2f de latao", pesoCobre, pesoZinco, pesoLatao);

    return 0;
}
