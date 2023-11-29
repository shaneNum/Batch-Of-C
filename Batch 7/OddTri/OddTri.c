#include <stdio.h>
#include <stdlib.h>

int main(){
	int size[10000], i, j, k, max;
	char hash1 = '-',hash2 = '-';
	
	scanf("%d", &max);
	for(k = 0; k < max; ++k){
		scanf("%d",&size[k]);
	}
	
	for(k = 0; k < max; ++k){
		if((size[k] + 1) % 2 == 1){
			hash1 = '#';
			hash2 = '*';
		}
		else
		{
			hash1 = '*';
			hash2 = '#';
		}
		
		printf("Case #%d:\n",k+1);
		for(i = 0; i < size[k]; ++i){
			for(j = 0; j < size[k] - i; ++j){
				(j == (size[k] - 1) - i) ? printf("%c",hash1) : printf(" ");
			}
			
			for(j = 0; j < 0 + i; ++j){
				if((j) % 2 == 1){
					printf("%c",hash1);
				}
				else
				{
					printf("%c",hash2);
				}
			}
			printf("\n");
		}
	}
	
//	Iteration
//	printf("\n");
//	printf("     #\n"); 
//	printf("    #*\n");
//	printf("   #*#\n");
//	printf("  #*#*\n");
//	printf(" #*#*#\n");
//	printf("#*#*#*\n");
//	printf("\n");
	return 0;
}
