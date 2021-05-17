#include <stdio.h>

int main() {

    int identificacao;
    float salarioFixo, totalVendas, porcentagem, porcentagemPelasVendas, salarioTotal;

    printf("Informe o numero do vendedor: ");
    scanf("%d", &identificacao);
    printf("Informe o salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);
    printf("Informe o total de vendas do vendedor: ");
    scanf("%f", &totalVendas);
    printf("Informe o percentual: ");
    scanf("%f", &porcentagem);

    porcentagemPelasVendas = totalVendas * (porcentagem / 100);
    salarioTotal = salarioFixo + porcentagemPelasVendas;

    printf("O vendedor %d ira receber %.2f reais", identificacao, salarioTotal);

    return 0;
}
