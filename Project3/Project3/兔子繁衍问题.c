#include<stdio.h>
int main()
{
	int a, b,c,t, month,n;
	scanf("%d", &n);
	if (n == 1) {
		printf("1\n");
		return 0;
	}
	a = 1, b = 1,c=1, month = 2;
	while (c < n) {
		c = a + b;
		t = b;
		b = c;
		a = t;
		month++;
	}
	printf("%d", month);
	return 0;
}