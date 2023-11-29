#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ip[1000][1000];
	int dot[1000], num[1000], i, j, max, nah;
	
	scanf("%d",&max);getchar();
	for(i = 0; i < max; ++i){
		scanf("%[^\n]",ip[i]);getchar();
	}
	
	for(i = 0; i < max; ++i){
		nah = 0;
		for(j = 0; j < strlen(ip[i]); ++j){
			if(ip[i][j] >= '0' && ip[i][j] <= '9' && nah == 0){
				num[i]++;
				nah = 1;
			}
			
			if(ip[i][j] == '.'){
				dot[i]++;
				nah = 0;
			}
		}
	}

	for(i = 0; i < max; ++i){
		(num[i] == 6 && dot[i] == 5) ? printf("Case #%d: YES\n",i+1) : printf("Case #%d: NO\n",i+1);
	}
	return 0;
}
