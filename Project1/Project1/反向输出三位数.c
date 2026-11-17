#include<stdio.h>
int main()
{
	int digit, x;
	scanf("%d", &x);
	for (int i = 1;i <= 3;i++) {
		digit = x % 10;
		x = x / 10;
		printf("%d",digit);
	}
	return 0;
}