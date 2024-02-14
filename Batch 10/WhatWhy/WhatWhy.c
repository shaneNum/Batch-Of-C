#include <stdio.h>
#include <stdlib.h>

//saya butuh bantuan kalu kayak gini karena saya pun gaktau???
unsigned long long int function(unsigned long long n){
	return n*(n+1)*(2*n+1)/6;
}

int binarySearch(int low, int high, unsigned long long target) {
    int mid = -1;
    while (low <= high) {
        unsigned long long midvalue;
        mid = low + (high - low) / 2;
        midvalue = function(mid);
        
        if (midvalue >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (function(mid) > target) {
        return mid; 
    } else {
        return mid + 1; 
    }
}



int main(){
	unsigned long long int t, m;
	unsigned long long int result;
	int n;
	int i, j;
	
	scanf("%llu",&t);
	for(i=0;i<t;i++){
		scanf("%llu",&m);

		n = binarySearch(0, 1442250, m);
	printf("Case #%d: %d\n",i+1,n);
	
	}		
	return 0;
}


