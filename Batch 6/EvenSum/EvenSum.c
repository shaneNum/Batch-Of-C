#include <stdio.h>
#include <stdlib.h>


int main() {
	int start, end, i = 0, sum = 0;
	
	scanf("%d %d", &start, &end);
	
	start++;
	for(i = start; i < end; ++i){
		if((i % 2) == 0){
			sum += i;
		}
	}
	
	printf("%d\n", sum);
	return 0;
}
