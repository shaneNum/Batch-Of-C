#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int palin(char nama[]){
	int left=0;
	int right = strlen (nama)-1;
	while (left<right){
		if (nama[left]!=nama[right]){
			return 0;	
		}
		left++;
		right --;
	}
	return 1;
}



int main (){
	int k;
	scanf ("%d", &k);getchar();
	
	char nama[k][501];
	int m[k];
	
	for (int i=0;i<k;i++){
		scanf("%[^\n]", nama[i]);getchar();
	}
	
	for (int i=0;i<k;i++){
		m[i] = palin(nama[i]);
		if(m[i]){
			printf("Case #%d: Yay, it\'s a palindrome\n",i+1);
		}else{
			printf("Case #%d: Nah, it\'s not a palindrome\n",i+1);
		}
	}
	
}
