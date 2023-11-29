#include <stdio.h>
#include <stdlib.h>

int main(){
	int size[10000], i, j, k, max;
	
	scanf("%d", &max);
	for(k = 0; k < max; ++k){
		scanf("%d",&size[k]);
	}
	
	for(k = 0; k < max; ++k){
		for(i = 0; i < size[k]; ++i){
			for(j = 0; j < size[k] - i; ++j){
				(j == (size[k] - 1) - i) ? printf("*") : printf(" ");
			}
			
			for(j = 0; j < 0 + i; ++j){
				printf("**");
			}
			printf("\n");
		}
	}
	
//	Iteration
//	printf("   *\n");
//	printf("  ***\n");
//	printf(" *****\n");
//	printf("*******\n");
	
	return 0;
}
