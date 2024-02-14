#include <stdio.h>
#include <stdlib.h>

unsigned long long fibbo(unsigned long long n, unsigned long long *count){
	unsigned long long result;
	
	if(n == 0){
		(*count)++;
		result = 0;
	}else if(n == 1){
		(*count)++;
		result = 1;
	}else{
		(*count)++;
		result = fibbo(n - 1, &*count) + fibbo(n - 2, &*count);
	}
	return result;
}


int main() {
	int max, i;
	unsigned long long n, count;
	scanf("%d", &max);
	
	unsigned long long outCount[max+1];
	
	for(i = 0; i < max; ++i){
		scanf("%llu",&n);
		
		count = 0;
		fibbo(n, &count);
		outCount[i] = count;
	}
	
	for(i = 0; i < max; ++i){
		printf("Case #%d: %llu\n",i+1,outCount[i]);
	}
	return 0;
}
