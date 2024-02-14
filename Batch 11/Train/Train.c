#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



//int partition(int arr[], int i, int k){
//	int l = i, h = k, midpoint, pivot, temporal;
//	bool done = false;
//	
//	midpoint = i + (k - i) / 2;
//	pivot = arr[midpoint];
//	
//	while(!done){
//		
//		while(arr[l] < pivot){
//			++l;
//		}
//		
//		while(pivot < arr[h]){
//			--h;
//		}
//		
//		if(l >= h){
//			done = true;
//		}else{
//			++count;
//			printf("%d", count);
//			temporal = arr[l];
//			arr[l] = arr[h];
//			arr[h] = temporal;
//			
//			++l;
//			--h;
//		}	
//	}
//	return h;
//}

//void quicksort(int arr[], int i, int k){
//	int j;
//	
//	if(i >= k){
//		return;
//	}
//	
//	j = partition(arr, i, k);
//	
//	quicksort(arr, i, j);
//	quicksort(arr, j+1, k);
//}

// terlalu sempurna, terlalu cepat

int main() {
	int caseoh, max, time[1000], box[1000], result[1000];
	int i, j, k, temporal = 0;
	int count = 0;
	
	scanf("%d", &caseoh);
		
	for(i = 0; i < caseoh; ++i){
		scanf("%d %d", &max, &time[i]);
		for(j = 0; j < max; ++j){
			scanf("%d", &box[j]);
		}
		
		for (j = 0; j < max - 1; j++) {
        	for (k = 0; k < max - j - 1; k++) {
           		if (box[k] > box[k + 1]) {
                	temporal = box[k + 1];
					box[k + 1] = box[k];
					box[k] = temporal;
					count++;
            	}	
        	}
   		 }
		result[i] = count;
		count = 0;
		max = 0;
	}
	
	for(i = 0; i < caseoh; ++i){
		printf("Case #%d: %d\n", i+1, result[i]*time[i]);
	}
	
	return 0;
}
