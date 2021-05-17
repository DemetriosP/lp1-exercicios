#include <stdio.h>

void main(){
	
	float nums[10];
	int i;
	
	for(i = 0; i < 10; i++){
		nums[i] = 0.0;
		printf("Infrome um valor: ");
		scanf("%f", &nums[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf("%.2f\n", nums[i]);
	}
	
	for(i = 9; i >= 0; i--){
		printf("%.2f\n", nums[i]);
	}
}
