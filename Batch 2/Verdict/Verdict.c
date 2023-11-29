#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char verdict[10];
	
	scanf("%s", verdict);
	
	if(strcmp(verdict, "TLE") == 0)
	{
		printf("TIME LIMIT EXCEEDED\n");
	}
    else if(strcmp(verdict, "AC") == 0)
	{
		printf("ACCEPTED\n");
	}
	else if(strcmp(verdict, "WA") == 0)
	{
		printf("WRONG ANSWER\n");
	}
	else if(strcmp(verdict, "MLE") == 0)
	{
		printf("MEMORY LIMIT EXCEEDED\n");
	}
	else if(strcmp(verdict, "RTE") == 0)
	{
		printf("RUNTIME ERROR\n");
	}
	else if(strcmp(verdict, "IQ") == 0)
	{
		printf("IN QUEUE\n");
	}
	else if(strcmp(verdict, "QU") == 0)
	{
		printf("IN QUEUE\n");
	}
	else if(strcmp(verdict, "CE") == 0)
	{
		printf("COMPILE ERROR\n");
	}
	else if(strcmp(verdict, "PE") == 0)
	{
		printf("PRESENTATION ERROR\n");
	}
	
	
	return 0;
}
