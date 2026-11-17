#include<stdio.h>
int main()
{
	int n;
	long double sum=1,k=1;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		k = k * i;
		sum += 1/k;
	}
	printf("%.8Lf", sum);
	return 0;
}