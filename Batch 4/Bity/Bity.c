#include <stdio.h>
#include <stdlib.h>

int main()
{
	int out[50], A, B, i, max;
	
	scanf("%d",&max);
	
	for(i = 0;i < max;++i)
	{
	  scanf("%d %d",&A,&B);
	  out[i] = (A/B)<<B;
	}
	
	for(i = 0;i < max;++i)
	{
	  printf("%d\n",out[i]);
	}
	
	return 0;
}
