#include<stdio.h>
int main()
{
	int x, digit, output=0;
	scanf("%d", &x);
	while (x > 0)
	{
		digit = x % 10;
		output = output * 10 + digit;
		x = x / 10;
	}
	printf("%d", output);
	return 0;
}
