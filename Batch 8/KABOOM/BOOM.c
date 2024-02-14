#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AP(double* att, double* cool, double* cast, double* aoe){
	*att += *att * 0.2;
	*cool += *cool * 0.3;
	*cast += *cast * 0.15;
	*aoe += *aoe * 0.05;
}

void CD(double* att, double* cool, double* cast, double* aoe){
	*att -= *att * 0.3;
	*cool -= *cool * 0.2;
	*cast += *cast * 0.15;
	*aoe -= *aoe * 0.5;
}

void CT(double* att, double* cool, double* cast, double* aoe){
	*att -= *att * 0.5;
	*cast -= *cast * 0.7;
	*aoe -= *aoe * 0.9;
}

void AE(double* att, double* cool, double* cast, double* aoe){
	*att += *att * 0.05;
	*cool += *cool * 0.2;
	*cast += *cast * 0.1;
	*aoe += *aoe * 0.6;
}


int main() {
	char runic[3];
	double att = 10000;
	double cool = 1;
	double cast = 60;
	double aoe = 20;
	int i, j, k;
	
	for(i = 0; i < 5; ++i){
		scanf("%2s-",runic);
		
		(strcmp(runic, "AP") == 0) ? AP(&att, &cool, &cast, &aoe) : (1);
		(strcmp(runic, "CD") == 0) ? CD(&att, &cool, &cast, &aoe) : (1);
		(strcmp(runic, "CT") == 0) ? CT(&att, &cool, &cast, &aoe) : (1);
		(strcmp(runic, "AE") == 0) ? AE(&att, &cool, &cast, &aoe) : (1);
	
	}
	
	printf("Attack Power = %.1f\n",(int)(att*10)/10.0);
	printf("Cooldown = %.1f Days\n",(int)(cool*10)/10.0);
	printf("Cast Time = %.1f seconds\n",(int)(cast*10)/10.0);
	printf("AoE = %.1f meters\n",(int)(aoe*10)/10.0);
	
	return 0;
}
