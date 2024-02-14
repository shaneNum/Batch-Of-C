#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, maxDay, maxCase;
	int view[1000], first[1000], last[1000], sum[1000];
	
	scanf("%d",&maxDay);
	for(i = 0;i < maxDay;++i){
		scanf("%d",&view[i]);
	}
	
	scanf("%d",&maxCase);
	for(i = 0;i < maxCase;++i){
		scanf("%d %d",&first[i],&last[i]);
		
		for(j = first[i]-1 ;j < last[i];++j){
			sum[i] += view[j];
		}
	}
	
	for(i = 0;i < maxCase;++i){
		printf("Case #%d: %d\n",i+1,sum[i]);
	}
	
	return 0;
}
