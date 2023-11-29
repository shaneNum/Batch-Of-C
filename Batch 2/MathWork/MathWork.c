#include <stdio.h>
#include <stdlib.h>

int main() 
{
	long long num1, num2, num3, num4, result1, result2, result3;
	
	scanf("(%lld+%lld)x(%lld-%lld)", &num1, &num2, &num3, &num4);getchar();
	result1 = (num1 + num2) * (num3 - num4);
	
	scanf("(%lld+%lld)x(%lld-%lld)", &num1, &num2, &num3, &num4);getchar();
	result2 = (num1 + num2) * (num3 - num4);
	
	scanf("(%lld+%lld)x(%lld-%lld)", &num1, &num2, &num3, &num4);getchar();
	result3 = (num1 + num2) * (num3 - num4);
	
	printf("%lld %lld %lld\n", result1, result2, result3);
	
	return 0;
}
