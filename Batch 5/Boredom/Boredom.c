#include <stdio.h>
#include <stdlib.h>


int main() {
	int add4[10000], minus5[10000], max, i, caseNum[10000];

	scanf("%d", &max);
	for(i = 0; i < max; ++i){
		scanf("%d %d", &add4[i], &minus5[i]);
	}
	
	i = 0;
	while(i < max){
		add4[i] += 4;
		minus5[i] -= 5;
		
		if(minus5[i] <= 0){
			caseNum[i] = 0;
			++i;
		}
		  
		if(minus5[i] == add4[i]){
			caseNum[i] = 1;
			++i;
		}	
	}
	
	for(i = 0; i < max; ++i){
		(caseNum[i]) 
		? printf("Case #%d: %d\n",i+1,minus5[i])
		: printf("Case #%d: Possiblen't\n",i+1);
	}

	return 0;
}
