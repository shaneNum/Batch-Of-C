#include <stdio.h>
#include <stdlib.h>

int main() {
	int phs, mag, pure;
	
	scanf("%d %d %d",&phs,&mag,&pure);
	
	printf("%.2f\n",(phs*0.2)+(mag*0.3)+(pure*0.5));
	
	return 0;
}
