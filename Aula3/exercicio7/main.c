#include <stdio.h>

int main(){

    int num1, num2, num3, num4;

    printf("Informe 4 numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    if(num1 > num2 & num3 > num4 & (num3 + num4) < (num1 + num2)) printf("Os criterios foram atendidos");
    else printf("Os criterios nao foram atendidos");

    return 0;

}
