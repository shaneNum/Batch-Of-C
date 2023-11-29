#include <stdio.h>

int main()
{
	int MFrog[10000], FFrog[10000];
	int limit, i;
	
	scanf("%d", &limit);
	getchar();
	
	for (i = 0; i < limit; i++)
	{
		scanf("%d %d", &MFrog[i], &FFrog[i]);
	}
	
	for (i = 0; i < limit; i++)
	{
		MFrog[i] = MFrog[i] % 2;
		FFrog[i] = FFrog[i] % 2;
		
		FFrog[i] == 1 && MFrog[i] == 1
		? printf("Case #%d: Need more frogs\n", i+1)
		: printf("Case #%d: Party time!\n", i+1);
	}
	
return 0;
}
