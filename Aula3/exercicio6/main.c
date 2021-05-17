#include <stdio.h>

int main() {

	int ano, resto;

	printf("Informe um ano: ");
	scanf("%d", &ano);

	if(ano % 400 == 0){
		printf("O ano e bissexto");
	} else if(ano % 4 == 0 & ano % 100 != 0) printf("O ano é bissexto");
		else printf("O ano nao e bissexto");

	return 0;
}
