#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int x,y,z,count = 0;
	
	scanf("%d %d %d",&x,&y,&z);
	getchar();
	
	while(x <= y){
		if(x == y && x == z){
			break;
		}
		x++;
		y--;
		count++;
	}
	
	if(x == y && x == z){
		printf("%d\n",count);
	}else{
		printf("-1\n");
	}

	return 0;
}
