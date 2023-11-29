#include <stdio.h>
#include <stdlib.h>

int main() {
	int cage, animal[2007], i;
	int total = 0;
	
	scanf("%d",&cage);
	
	for(i = 0; i < cage; ++i){
		scanf("%d", &animal[i]);
		total += animal[i];
	}
	
	printf("%d\n", total);
	return 0;
}
