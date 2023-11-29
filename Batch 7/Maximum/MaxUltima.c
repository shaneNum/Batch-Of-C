#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, j, sum = 0, people[1004];
	
	scanf("%d",&people[i]);
	while(people[i] != 0){
		i++;
		scanf("%d",&people[i]);
	}
	
	for(j = 0; j < i; ++j){
		if(people[j] > 100000){
			sum++; 
		}
	}
	
	printf("%d\n",sum);
	return 0;
}
