#include <stdio.h>
#include <stdlib.h>

void printFibonacci(int n){
	//tak akan berubah jika diluar scope! keren bukan?
    static int n1=0,n2=1,n3,count = 2;
    
    if(n>1){    
        n3 = n1 + n2;
        if((count % 3) == 0){
        	n3 = 10;
		}
        n1 = n2;
        n2 = n3;
		printf("%d ",n3);	
		count++;
        printFibonacci(n-1);
    }else{
    	n3 = n1 + n2;
    	if((count % 3) == 0){
        	n3 = 10;
		}
        n1 = n2;
        n2 = n3;
		printf("%d\n",n3);	
	}
}    

int main(){  
  
    int n;    
    scanf("%d",&n);
    
    switch(n){
    	case 0:
    	break;
    	
    	case 1:
    		printf("%d\n",0);
    	break;
    	
    	case 2:
    		printf("%d ",0);
			printf("%d\n",1);
    	break;
    	
    	default:
    		printf("%d ",0);
			printf("%d ",1);
    		printFibonacci(n-2);
    	break;
	}
	 
  return 0;  
 }    
