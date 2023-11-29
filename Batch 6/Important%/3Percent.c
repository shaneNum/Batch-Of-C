#include <stdio.h>
#include <stdlib.h>

int main() {
	//Reminder untuk diri sendiri, BACA TELITI OK!!!!!!!
	int max, i, percent, number;
	double result[1000];
	
	scanf("%d", &max);
	if(max == 3){
		for(i = 0; i < max; ++i){
			scanf("%d %d", &number, &percent);
			result[i] = (percent/100.00) * number;
		}
		
		for(i = 0; i < max; ++i){
			printf("%.2lf\n", result[i]);
		}
	}
	//LAIN KALI JANGAN BUTA YA SENNNNN!
	return 0;
}
