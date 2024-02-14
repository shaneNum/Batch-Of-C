#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, max;
	unsigned long long matrix[105][105], temp[105][105], size[105];
	
	
	scanf("%d",&max);
	
	for(i = 0;i < max; ++i){
		
		scanf("%d", &size[i]);
		
		for(j = 0;j < size[i]; ++j){
			for(k = 0;k < size[i]; ++k){
				
				scanf("%llu",&matrix[j][k]);
				
			}
		}
		
		
		for(j = 0;j < size[i]; ++j){
			temp[i][j] = 0;
			for(k = 0;k < size[i]; ++k){
				
				temp[i][j] += matrix[k][j];
				
			}
		}
	}
	
	for(i = 0;i < max; ++i){
		printf("Case #%d: ", i+1);
		for(j = 0;j < size[i]-1; ++j){
			printf("%d ", temp[i][j]);
		}
		printf("%d\n", temp[i][size[i]-1]);
	}
	
	return 0;
}
