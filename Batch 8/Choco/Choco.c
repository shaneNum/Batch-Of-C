#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, max, choco, child ;
	unsigned long long chocoChild [500][500], temp[100], big = 0;
	
	
	scanf("%d",&max);
	
	for(i = 0;i < max; ++i){
		
		scanf("%d %d", &child, &choco);
		
		for(j = 0;j < child; ++j){
			for(k = 0;k < choco; ++k){
				
				scanf("%llu",&chocoChild[j][k]);
				
			}
		}
		
		temp[i] = 0;
		for(j = 0;j < child; ++j){
			for(k = 0;k < choco; ++k){
					
				if(chocoChild[j][k] > big){
					big = chocoChild[j][k];
				}
			}
			temp[i] += big;
			big = 0;
		}
	}
	
	for(i = 0;i < max; ++i){
		printf("Case #%d: %llu\n", i+1, temp[i]);
	}
	
	return 0;
}
