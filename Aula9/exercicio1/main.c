#include <stdio.h>
#include <string.h>

void main(){
	
	char alfabeto[10];
	int i;
	
	fgets(alfabeto, 10, stdin);

	for(i = 0;i < strlen(alfabeto); i++){
		if(alfabeto[i] >= 'a' && alfabeto[i] <= 'z') alfabeto[i] -= 32;
	}
	
	printf("%s", alfabeto);
}
