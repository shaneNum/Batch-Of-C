#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j,k;
	int n,t;
	int temp;
	char tempnama [100];
	char nama [100] [100];
	int angka [100];
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
			scanf("%d",&n);
			
		for(j=0;j<n;j++){
			
		scanf("%[^#]",nama[j]);
		getchar();
		scanf("%d",&angka[j]);
	
		}
		
		for(j=0;j<n-1;j++){
			for(k=0;k<n-1-j;k++){
				if(angka[k]<angka[k+1] || (angka[k] == angka[k + 1] && strcmp(nama[k], nama[k + 1]) > 0)){
					temp = angka[k];
					angka [k] = angka [k+1];
					angka [k+1] = temp;
					strcpy(tempnama,nama[k]);	
					strcpy(nama[k],nama[k+1]);
					strcpy(nama[k+1],tempnama);
			}
		}
	}
	
	printf("Case #%d:",i+1);
	for(j=0;j<n;j++){
		printf("%s - %d",nama[j],angka[j]);
	}
	printf("\n");
	}
return 0;
}

