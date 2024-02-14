#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct student{
	char name[60];
	int score;
};

//this will be useful
int partition(struct student arr[], int i, int k){
	int l = i, h = k, midpoint;
	struct student temporal;
	struct student pivot;
	bool done = false;
	
	midpoint = i + (k - i) / 2;
	pivot = arr[midpoint];
	
	while(!done){
		
		while(arr[l].score > pivot.score || arr[l].score == pivot.score && (strcmp(arr[l].name, pivot.name) < 0)){
			++l;
		}
		
		while(arr[h].score < pivot.score || arr[h].score == pivot.score && (strcmp(arr[h].name, pivot.name) > 0)){
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
void quicksort(struct student arr[], int i, int k){
	int j;
	
	if(i >= k){
		return;
	}
	
	j = partition(arr, i, k);
	
	quicksort(arr, i, j);
	quicksort(arr, j+1, k);
}

int main() {
	int MAX, TRUEMAX, i, j, k;
	struct student arr[60];
	
	//gimana cara buat casenya damien? saya agak kurang tau kalau begini... bisa bantu? ini untuk kita berdua belajar
	//dan oh ya buat sample juga untuk tes apakah ini emang sesuai diinginkan
	
	scanf("%d",&MAX);
		
	for(j = 0; j < MAX; ++j){
		scanf("%[^#]",arr[j].name);getchar();
		scanf("%d",&arr[j].score);
	}
	quicksort(arr, 0, MAX-1);

//	printf("Case #%d:",i+1);
	for(j = 0; j < MAX; ++j){
		printf("%s - %d",arr[j].name,arr[j].score);
	}
	printf("\n");
			
	return 0;
}


//	for(j=0;j<n-1;j++){
//			for(k=0;k<n-1-j;k++){
//				if(angka[k]<angka[k+1] || (angka[k] == angka[k + 1] && strcmp(nama[k], nama[k + 1]) > 0)){
//					temp = angka[k];
//					angka [k] = angka [k+1];
//					angka [k+1] = temp;
//					strcpy(tempnama,nama[k]);	
//					strcpy(nama[k],nama[k+1]);
//					strcpy(nama[k+1],tempnama);		
//				}
//			}
//		}	

//	printf("%s - %d\n",s[0].name,s[0].score);
