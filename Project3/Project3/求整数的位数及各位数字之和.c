#include<stdio.h>
int main()
{
	int count=0,digit,x,sum=0;
	scanf("%d", &x);
	do {
		digit = x % 10;
		sum += digit;
		count++;
		x /= 10;
	} while (x != 0);
	printf("%d %d", count, sum);
	return 0;
}