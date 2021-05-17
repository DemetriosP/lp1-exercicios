#include <stdio.h>
#include <string.h>

#define TAM 20

typedef struct {
	
	char titulo[TAM];
	char autor[TAM];
	int paginas;	
	
} Livro;

void main(){
	
	Livro l[3];
	int i, j;
	
	for( i = 0; i < 3; i++){
		printf("Informe o titulo do livro: ");
		fgets(l[i].titulo, sizeof(l[i].titulo), stdin);
		
		fflush(stdin);
		
		j = -1;
	    do{
	    	j++;
			if(l[i].titulo[j] == '\n') l[i].titulo[j] = '\0';
		}while(l[i].titulo[j] != '\0');
		
		printf("Informe o nome do autor: ");
		fgets(l[i].autor, sizeof(l[i].autor), stdin);
		
		fflush(stdin);
		
		j = -1;
	    do{
	    	j++;
			if(l[i].autor[j] == '\n') l[i].autor[j] = '\0';
		}while(l[i].autor[j] != '\0');
		
		printf("Informe a quantidade de paginas do livro: ");
		scanf("%d", &l[i].paginas);
		
		fflush(stdin);
	}
	
	for( i = 0; i < 3; i++){
		printf("%s\n", l[i].titulo);
		printf("%s\n", l[i].autor);
		printf("%d\n\n", l[i].paginas);
	}
	
}
