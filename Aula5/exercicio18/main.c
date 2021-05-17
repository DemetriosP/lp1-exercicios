#include <stdio.h>

void main() {

    int num, valor1, valor2, i,conta;

    printf("Informe um valor: ");
    scanf("%d", &num);

    valor1 = 1;
    valor2 = 0;

    for(i = 0; i < num; i++){

        conta = valor1 + valor2;
        if(i > 0) valor2 = valor1;
        valor1 = conta;
        printf("%d", conta);

    }
}