#include <stdio.h>
#include <stdlib.h>

int main()
{
	char A[20], B[20], C[20], D[20], E[20], Z[20];
	
	scanf("%s %s %s", A, B, C);getchar();
	scanf("%s %s %s", D, E, Z);getchar();
	
	//Zip Zop Beep Boop Translasikan...
	printf("%sszs %sszs %sszs\n", A, B, C);
	printf("%sszs %sszs %sszs\n", D, E, Z);
	return 0;
}
