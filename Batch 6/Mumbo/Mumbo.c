#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {	
	unsigned char jumbled[1000][1000];
	int len[1000], mumbo[1000], max, i, j;
	
	scanf("%d", &max);
	for(i = 0; i < max; ++i){
		scanf("%d %d", &len[i], &mumbo[i]);
		getchar();
		scanf("%[^\n]", &jumbled[i]);
	}
	
	for(i = 0; i < max; ++i){
		while(mumbo[i] > 26){
				mumbo[i] = mumbo[i] % 26;
			}
		for(j = 0; j < len[i]; ++j){
			jumbled[i][j] = jumbled[i][j] + mumbo[i];
			while(jumbled[i][j] > 122){
				jumbled[i][j] -= 26;
			}
		}
	}
	
	for(i = 0; i < max; ++i){
		printf("Case #%d: %s\n",i+1,jumbled[i]);
	}
	
	return 0;
}
