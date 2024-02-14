#include <stdio.h>
#include <stdlib.h>

int theorem(int num, int *count){
	int result;
	
	if(num == 0){
		result = 1;
	}else if(num == 1){
		result = 2;
	}else if((num % 5) == 0){
		if((num % 3) == 0){
			(*count)++;
		}
		result = num * 2;
	}else{
		if((num % 3) == 0){
			(*count)++;
		}
		result = theorem(num-1,&*count) + num + theorem(num-2,&*count) + num - 2;
	}
	
	return result;
}


int main() {
	int max, i, count, num;
	int store[100], store2[100];
	
	scanf("%d", &max);
	
	for(i = 0; i < max; ++i){
		count = 0;
		num = 0;
		scanf("%d", &num);
		store[i] = theorem(num,&count);
		store2[i] = count;
	}
	
	for(i = 0; i < max; ++i){
		printf("Case #%d: %d %d\n",i+1,store[i],store2[i]);
		count = 0;
	}
	return 0;
}
