#include <stdio.h>
#include <stdlib.h>

int main() {
	int jo[100000], bi[100000], max, i;

	scanf("%d", &max);
	for(i = 0; i < max; ++i){
		scanf("%d %d", &jo[i], &bi[i]);
	}
	
	for(i = 0; i < max; ++i){
		(bi[i] < jo[i]) 
		? printf("Case #%d: Go-Jo\n",i+1)
		: printf("Case #%d: Bi-Pay\n",i+1);
	}
	return 0;
}
