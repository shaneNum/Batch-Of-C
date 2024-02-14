#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, max;
	int cost[1001], you[1001], temp[150][1000], big[1001];
	
	scanf("%d", &max);
	
	for(i = 0;i < max; ++i){
		scanf("%d", &big[i]);
		
		for(j = 0;j < big[i]; ++j){
			scanf("%d", &cost[j]);
		}
		
		for(j = 0;j < big[i]; ++j){
			scanf("%d", &you[j]);
		}
		
		for(j = 0;j < big[i]; ++j){
			temp[i][j] = cost[j] - you[j];
		}
	}
	
	for(i = 0;i < max; ++i){
		printf("Case #%d: ", i+1);
		for(j = 0;j < big[i]-1; ++j){
			printf("%d ", temp[i][j]);
		}
		printf("%d\n", temp[i][big[i]-1]);
	}
	
	return 0;
}
