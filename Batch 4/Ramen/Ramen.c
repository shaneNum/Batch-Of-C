#include <stdio.h>
#include <stdlib.h>


int main()
{
	int out[1000];
	int max, i, ramenNeed, ramenShelf, ramenStore;
	
	scanf("%d", &max);
	
	for(i = 0; i < max; i++)
	{
		scanf("%d %d %d",&ramenNeed, &ramenShelf, &ramenStore);
		(ramenNeed <= ramenShelf + ramenStore)
		? (out[i] = 0)
		: (out[i] = 1);
		
	}
	
	for(i = 0; i < max; i++)
	{
		(out[i] == 1)
		? printf("Case #%d: no\n", i+1)
		: printf("Case #%d: yes\n", i+1);
	}
	
	return 0;
}
