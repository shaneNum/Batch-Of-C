#include<stdio.h>

int main()
{	
    char name3[1000];
    scanf("%[^\n]", name3);

    printf("Happy Birthday to %s.\n", name3);
	return 0;
}
