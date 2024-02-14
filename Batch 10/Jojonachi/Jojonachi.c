#include <stdio.h>
#include <stdlib.h>

long long X = 0;
long long Y = 0;

long long fibbo(long long n){
	long long result;
	
	if(n == 0){
		result = X;
	}else if(n == 1){
		result = Y;
	}else{
		result = fibbo(n - 1) - fibbo(n - 2);
	}
	return result;
}


int main() {
	int max, i;
	long long n, casoh[1000];
	scanf("%d", &max);
	
	for(i = 0; i < max; ++i){
		scanf("%lld %lld %lld",&n, &X, &Y);
		
		casoh[i] = fibbo(n);
	}
	
	for(i = 0; i < max; ++i){
		printf("Case #%d: %lld\n",i+1,casoh[i]);
	}
	return 0;
}
