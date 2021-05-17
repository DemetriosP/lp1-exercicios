#include <stdio.h>

int main()
{
    int num1, num2, soma, sub, multi;
    float div;

    num1 = 10;
    num2 = 5;

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("soma = %d\n", soma);
    printf("subtracao = %d\n", sub);
    printf("multiplicacao = %d\n", multi);
    printf("divisao = %.2f\n", div);

    return 0;
}

