#include <stdio.h>
#include <stdlib.h>

struct Peopos{
	char tree[100];
	char name[100];
};


int main() {
	int i, j, max, casoh;
	struct Peopos p[200];
	
	FILE *fp;
	fp = fopen("testdata.in","r");
	fscanf(fp,"%d",&casoh);
	
	for(i = 0; i < casoh; ++i){
		fscanf(fp,"%[^#]#",p[i].tree);
		fscanf(fp,"%[^\n]\n",p[i].name);
	}
	
	
	
	
	
//	printf("%s%s\n",p[0].tree, p[0].name);
//	printf("%s%s\n",p[1].tree, p[1].name);
	
	fclose(fp);
//	printf("Case #%d: %s\n", i+1, p[0].name);
	
	
	
	return 0;
}
