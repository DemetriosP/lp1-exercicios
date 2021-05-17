#include <stdio.h>

int main() {

	float diasTrabalhados, imposto, salarioReceber, salarioBruto;

	printf("Informe a quantidade de dias trabalhados: ");
	scanf("%f", &diasTrabalhados);

	salarioBruto = diasTrabalhados * 50.00;
	imposto = salarioBruto * 0.08;
	salarioReceber = salarioBruto - imposto;

	printf("O seu salario sera %.2f reais", salarioReceber);

	return 0;

}
