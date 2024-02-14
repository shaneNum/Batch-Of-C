#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//ive prepared for this! hahahaha! made by myself and very modulated!
int partition(int arr[], int i, int k){
	int l = i, h = k, midpoint, pivot, temporal;
	bool done = false;
	
	midpoint = i + (k - i) / 2;
	pivot = arr[midpoint];
	
	while(!done){
		
		while(arr[l] < pivot){
			++l;
		}
		
		while(pivot < arr[h]){
			--h;
		}
		
		if(l >= h){
			done = true;
		}else{
			temporal = arr[l];
			arr[l] = arr[h];
			arr[h] = temporal;
			
			++l;
			--h;
		}	
	}
	return h;
}

//Very Nice
void quicksort(int arr[], int i, int k){
	int j;
	
	if(i >= k){
		return;
	}
	
	j = partition(arr, i, k);
	
	quicksort(arr, i, j);
	quicksort(arr, j+1, k);
}

//Gila, harus belajar hal baru untuk lebih cepat mensearching sesuatu
int binarySearch(int arr[], int targetin, int low, int high) {
	while (low <= high) {
    	int mid = low + (high - low) / 2;

    	if(arr[mid] == targetin){
     	 return mid + 1;
		}
	
    	if(arr[mid] < targetin){
    	  low = mid + 1;
		}else{
    	  high = mid - 1;
 		}
	}	
  	return -1;
}

int main() {
	int player, recruit, i, j;
	int height[100001], call[100001];
	bool valid = false;
	
	scanf("%d", &player);
	
	for(i = 0; i < player; ++i){
		scanf("%d", &height[i]);
	}
	
	quicksort(height, 0, player - 1);
	for(i = 0; i < player; ++i){
		printf("%d ", height[i]);
	}
	printf("\n");
	
	scanf("%d", &recruit);
	
	for(i = 0; i < recruit; ++i){
		scanf("%d", &call[i]);
	}
	
	for(i = 0; i < recruit; ++i){
			printf("%d\n",binarySearch(height, call[i], 0, player - 1));
	}
	
	return 0;
}
