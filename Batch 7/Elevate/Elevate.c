#include <stdio.h>
#include <stdlib.h>

int main() {
	int elevate1, elevate2, elevate3;
	
	scanf("%d %d %d",&elevate1, &elevate2, &elevate3);
	
	if((elevate1 > 100) || (elevate2 > 100) || (elevate3 > 100)){
		return 0;
	}
	
	if((elevate3 - elevate1) == (elevate2 - elevate3)){
		printf("%d\n",(elevate3 - elevate1));
	}else{
		printf("-1\n");
	}
	
	return 0;
}
