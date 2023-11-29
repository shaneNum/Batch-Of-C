#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int peserta, i, val, pesertaN[1000];
	int jojoN, liliN, bibiN;
	
	scanf("%d",&peserta);
	
	scanf("%d %d %d",&jojoN, &liliN, &bibiN);
	
	for(i = 0; i < peserta; ++i){
		scanf("%d",&pesertaN[i]);
	}
	
	val = jojoN + liliN + bibiN;
	
	for(i = 0; i < peserta; ++i){
		val += pesertaN[i];
	}
	
	val /= peserta+3;
	
	(jojoN >= val)?(printf("Jojo lolos\n")):(printf("Jojo tidak lolos\n"));
	(liliN >= val)?(printf("Lili lolos\n")):(printf("Lili tidak lolos\n"));
	(bibiN >= val)?(printf("Bibi lolos\n")):(printf("Bibi tidak lolos\n"));
	
	return 0;
}
