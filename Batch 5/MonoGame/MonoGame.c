#include <stdio.h>
#include <stdlib.h>


int main(){
	int max, dice[2007], i;
	int total = 0;
	
	scanf("%d",&max);
	
	for(i = 0; i < max; ++i){
		scanf("%d", &dice[i]);
		total += dice[i];
		
		if(total == 12){
			total = 28;
		}
		
		if(total == 30){
			total = 10;
		}
		
		if(total == 35){
			total = 7;
		}
		
		if(total >= 40){
			total -= 40;
		}
	}
	printf("%d\n", total);
	
    return 0;
}
