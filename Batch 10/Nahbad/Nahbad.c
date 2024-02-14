#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j, casoh;
	
	FILE *fp;
	fp = fopen("testdata.in","r");
	
	fscanf(fp, "%d\n", &casoh);
	for(i = 0; i < casoh; ++i){
		//i shoulve done this long ago...
		char wierd[1000];
		int shift = 0;
		
		fscanf(fp, "%d\n", &shift);
		fscanf(fp, "%[^\n]\n", wierd);
		
		for(j = 0; j < strlen(wierd); ++j){
			switch(wierd[j]){
				case '0':
					wierd[j] = 'O';
				break;
				
				case '1':
					wierd[j] = 'I';
				break;
				
				case '3':
					wierd[j] = 'E';
				break;
				
				case '4':
					wierd[j] = 'A';
				break;
				
				case '5':
					wierd[j] = 'S';
				break;
				
				case '6':
					wierd[j] = 'G';
				break;
				
				case '7':
					wierd[j] = 'T';
				break;
				
				case '8':
					wierd[j] = 'B';
				break;
				
				default:
				break;
			}
			
			if (wierd[j] != ' '){
				wierd[j] -= shift;
				
				if(wierd[j] < 65){
				wierd[j] += 26;
				}
			}
		}
		
		printf("Case #%d: %s\n", i+1, wierd);
	}
	fclose(fp);
	
	
	return 0;
}
