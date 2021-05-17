#include <stdio.h>

#define TAM 10

int main(){
    
    int nums[TAM], i, maior, menor, imenor, imaior, num;
    char resp;
    
    menor = nums[0];
    imenor = 0;
    maior = nums[0];
    imaior = 0;
    
    do{
        printf("Iniciar? (s/n)");
        scanf("%c", &resp);
    }while(resp != 's' && resp != 'n');
        
    if(resp == 's'){
        
        for(i = 0; i< TAM; i++){
            
        nums[i] = 0;
            
            do{
                printf("Entre com o valor positivo: ");
                scanf("%d", &num);
            }while(num < 0);
            
        scanf("%d", &nums[i]);
        
            if(nums[i] < menor) {
                menor = nums[i];
                imenor = i;
            }
            if(nums[i] > maior) {
                maior = nums[i];
                imaior = i;
            }
        
        }
        
    printf("1° valor = %d\n5° valor = %d\n10° valor = %d", nums[0], nums[4], nums[9]);
    printf("Menor (%d) = %d\nMaior (%d) = %d", imenor, menor, imaior, maior);
    
    }
    
    return 0;
}