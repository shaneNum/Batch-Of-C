#include <stdio.h>
#include <stdlib.h>

unsigned long long theorem(unsigned long long num){
	if(num == 1){
		return 1;
	}else if(num % 2 == 1){
		return theorem(num - 1) + theorem(num + 1);
	}else{
		return theorem(num/2);
	}
}


int main() {
	int max, i;
	unsigned long long num[100];
	
	scanf("%d", &max);
	
	for(i = 0; i < max; ++i){
		scanf("%llu", &num[i]);
	}
	
	for(i = 0; i < max; ++i){
		printf("Case #%d: %llu\n",i+1,theorem(num[i]));
	}
	return 0;
}
