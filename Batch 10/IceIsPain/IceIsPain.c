#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned long long i, j, max, casoh;
	
	
	FILE *fp;
	fp = fopen("testdata.in","r");
	fscanf(fp,"%llu",&casoh);
	
	for(i = 0; i < casoh; ++i){
		//i should've done this long ago...
		unsigned long long area = 0, perimeter = 0;
		
		fscanf(fp, "%llu", &max);
		unsigned long long arr[max];
		for(j = 0; j < max; ++j){
			fscanf(fp, "%llu", &arr[j]);
			area += arr[j] * 4;
		}
		
		for(j = 0;j < max; ++j){
			perimeter += 4;
			if(j == 0){
				perimeter += arr[j] * 2;
			}else if(arr[j - 1] < arr[j]){
				perimeter += (arr[j] - arr[j - 1]) * 2;
			}else{
				perimeter += (arr[j - 1] - arr[j]) * 2;
			}
		}
		perimeter += arr[max - 1] * 2;
		printf("Case #%llu: %llu %llu\n", i+1, perimeter, area);
	}
	fclose(fp);
	
	return 0;
}
