#include <stdio.h>
#include <stdlib.h>


int main()
{
	int meat, vegi, egg;
	
	
	scanf("%d %d %d",&meat,&vegi,&egg);
	
	if(meat >= vegi && meat >= egg)
	{
		if(vegi >= egg)
		{
			printf("Daging\n");
			printf("Sayur\n");
			printf("Telur\n");
		}
		else
		{
			printf("Daging\n");
			printf("Telur\n");
			printf("Sayur\n");
		}
	}
	else if(vegi >= meat && vegi >= egg)
	{
		if(meat >= egg)
		{
			printf("Sayur\n");
			printf("Daging\n");
		    printf("Telur\n");
		}
		else
		{
			printf("Sayur\n");
			printf("Telur\n");
			printf("Daging\n");
		}
	}
	else
	{
		if(meat >= vegi)
		{
			printf("Telur\n");
			printf("Daging\n");
			printf("Sayur\n");
		}
		else
		{
			printf("Telur\n");
			printf("Sayur\n");
			printf("Daging\n");
		}
	}
	
	return 0;
}
