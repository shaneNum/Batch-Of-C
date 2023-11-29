#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rowA, rowB, rowC, rowD;
	float sum1, sum2, sum3;
	
	// dari pada panjang-panjang sum = ((rowA / 1) * 2) + ((rowB / 2) * 4) + ((rowC / 3) * 6) + ((rowD / 4) * 4);
	// perumusan bisa disederhanakan menjadi sum = (rowA * 2) + (rowB * 2) + (rowC * 2) + rowD;
	// dilihat jika menggunakan kertas, nota untuk sendiri jika ada rumus komplex kerjakan dulu lewat kertas
	
	
	scanf("%d %d %d %d", &rowA, &rowB, &rowC, &rowD);
	sum1 = (rowA * 2) + (rowB * 2) + (rowC * 2) + rowD;
	
	scanf("%d %d %d %d", &rowA, &rowB, &rowC, &rowD);
	sum2 = (rowA * 2) + (rowB * 2.0) + (rowC * 2) + rowD;
	
	scanf("%d %d %d %d", &rowA, &rowB, &rowC, &rowD);
	sum3 = (rowA * 2) + (rowB * 2) + (rowC * 2) + rowD;
	
	printf("%.2f\n", sum1);
	printf("%.2f\n", sum2);
	printf("%.2f\n", sum3);
}

