#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i;i<b;i++)
	{
		printf("%d\n", a);
		a++;
	}
 	return 0;
}
