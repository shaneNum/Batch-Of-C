#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char china[110];
	
	scanf("%[^\n]",china);
	printf("%s\n",strcat(china,"-san"));
	
	return 0;
}
