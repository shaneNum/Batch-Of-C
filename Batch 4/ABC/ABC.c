#include <stdio.h>
#include <stdlib.h>

int main()
{
	char al1, al2, al3;
	int i,j,rank[3];
	
	scanf("%c %c %c",&al1,&al2,&al3);
	
	if(al1 < al2 && al1 < al3)
	{
		if(al2 < al3)
		{
			printf("1 2 3");
		}
		else
		{
			printf("1 3 2");
		}
	}
	else if(al2 < al1 && al2 < al3)
	{
		if(al1 < al3)
		{
			printf("2 1 3");
		}
		else
		{
			printf("2 3 1");
		}
	}
	else
	{
		if(al1 < al2)
		{
			printf("3 1 2");
		}
		else
		{
			printf("3 2 1");
		}
	}
	printf("\n");
	
	return 0;
}
