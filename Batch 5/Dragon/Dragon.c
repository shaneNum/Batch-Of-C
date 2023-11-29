#include <stdio.h>
#include <stdlib.h>


int main() {
	int bibi[100000], bibiArsenal, bibiPow = 0;
	int dragon[100000], dragonAttack, dragonPow = 0;
	int i;
	
	scanf("%d %d",&bibiArsenal, &dragonAttack);
	
	for(i = 0; i < bibiArsenal; ++i){
		scanf("%d",&bibi[i]);
		if(bibi[i] > bibiPow){
			bibiPow = bibi[i];
		}
	}
	
	for(i = 0; i < dragonAttack; ++i){
		scanf("%d",&dragon[i]);
		if(dragon[i] > dragonPow){
			dragonPow = dragon[i];
		}
	}
	
	(bibiPow > dragonPow) ? printf("The dark secret was true\n") : printf("Secret debunked\n");
	
	return 0;
}
