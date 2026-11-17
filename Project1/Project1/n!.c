#include<stdio.h>

int main(void)
{
	int n, i;
	double sum;
	sum = 1;

	printf("enter the n\n");
	scanf("%d", &n);

	for (i = 1;i <= n;i++) {
		sum = sum * i;
	}
	printf("sum=%.0lf\n", sum);
	return 0;
}