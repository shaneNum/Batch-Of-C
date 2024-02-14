#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, max;
	
	scanf("%d", &max);
	
	for(i = 0; i < max; ++i){
		for(j = 0; j < i+1; ++j){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
