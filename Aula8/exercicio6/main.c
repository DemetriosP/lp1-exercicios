#include <stdio.h>
#include <conio.h>


#define TAM 10

void main(){
	
	float mesas[TAM][TAM], pagamento, valor, troco;
	int coluna, linha, i, opcao, j, encerrar;
	
	encerrar = 0;
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			mesas[i][j] = 0;
		}
	}
	
	do{
		printf("Menu\n0 - Registrar valor em uma mesa\n1 - Ver conta de uma mesa\n2 - Pagar conta de uma mesa\n3 - Sair\n");
		scanf("%d", &opcao);
		system("CLS");
		
		if(opcao != 3){
			printf("Informe a linha: ");
			scanf("%d", &linha);
			printf("Informe a coluna: ");
			scanf("%d", &coluna);
			
		}
		
		switch(opcao){
			
			case 0:
				
				printf("Informe o valor a ser registrado: ");
				scanf("%f", &valor);
				mesas[linha][coluna] =+ valor;
				system("CLS");
				break;
			
			case 1:
				
				printf("O valor da conta da mesa na linha %d e coluna %d e %.2f", linha, coluna, mesas[linha][coluna]);
				printf("\n\nPrecione qualquer tecla para continuar...");
				getch();
				system("CLS");
				
				break;
			
			case 2:	
			
				if(mesas[linha][coluna] > 0){
					printf("Informe o valor a ser pago: ");
					scanf("%f", &pagamento);
				
					troco = mesas[linha][coluna] - pagamento;
				
					if(troco > 0) {
						printf("Ainda falta ser pago %.2f reais", troco);
						mesas[linha][coluna] = troco;
					}else if(troco < 0){
						printf("Troco", -troco);
						mesas[linha][coluna] = 0;
					} else mesas[linha][coluna] = 0;
				}else printf("A mesa na linha %d e coluna %d nao tem valor a ser pago", linha, coluna);
					
				printf("\n\nPrecione qualquer tecla para continuar...");
				getch();
				system("CLS");
				
				break;
			
			case 3:
				
				for(i = 0;i < TAM; i++){
					for(j = 0; j < TAM; j++){
						if(mesas[i][j] > 0){
							printf("Mesa na linha %d e coluna %d tem %.2f reais em aberto.\n", i, j, mesas[i][j]);
							encerrar = 0;
						}
					}
				}
				
				printf("Precione qualquer tecla para continuar...");
				getch();
				system("CLS");
				
				break;
			
			default:
				printf("Por favor selecione uma opcao valida.\n\nPrecione qualquer tecla para continuar...");
				getch();
				system("CLS");	
		}
	}while(encerrar == 0);
}
