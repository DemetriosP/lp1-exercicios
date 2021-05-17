#include <stdio.h>

int main() {

    float valorDaRefeicao, porcentagemGarcom;

    printf("Informe o valor da refeicao: ");
    scanf("%f", &valorDaRefeicao);

    porcentagemGarcom = valorDaRefeicao * 0.1;

    printf("O garcom deve receber %.2f", porcentagemGarcom);

    return 0;
}
