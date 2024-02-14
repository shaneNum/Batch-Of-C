#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, max;
	int atrocities[1000], norm[1000], result[1000];
	
	scanf("%d",&max);
	
	for(i = 0;i < max;++i){
		scanf("%d",&atrocities[i]);
	}
	
	for(i = 0;i < max;++i){
		scanf("%d",&norm[i]);
	}
	
	for(i = 0;i < max;++i){
		//black magic for real
		result[atrocities[i]] = norm[i];
	}
	
	for(i = 0;i < max-1;++i){
		printf("%d ", result[i]);
	}
	printf("%d\n", result[max-1]);
	
	return 0;
}
