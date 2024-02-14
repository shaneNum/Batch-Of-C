#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	FILE *fp;
	fp = fopen("testdata.in","r");
	fscanf(fp,"%d %d", &a, &b);
	fclose(fp);
	printf("%d\n",a+b);
	return 0;
}
