#include <stdio.h>
#include <stdlib.h>


int main(){
	int max, dice[3007], i;
	int total = 0;
	
	scanf("%d",&max);
	
	for(i = 0; i < max; ++i){
		scanf("%d", &dice[i]);
		total += dice[i];
		
		//Ladder
		if(total == 9){
			total = 21;
		}
		
		if(total == 33){
			total = 42;
		}
		
		if(total == 76){
			total = 92;
		}
		
		//Snake
		if(total == 53){
			total = 37;
		}
		
		if(total == 80){
			total = 59;
		}
		
		if(total == 97){
			total = 88;
		}
	}
	printf("%d\n", total);
	
    return 0;
}
