#include <stdio.h>

int main (){

    float num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("Numero %.2f e maior que numero %.2f", num1, num2);
    } else {
        printf("Numero %.2f e maior que numero %.2f", num2, num1);
    }

}
