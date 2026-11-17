#include<stdio.h>
int main()
{
	double sum=0,h;
	int n;

	scanf("%lf%d",&h, &n);
	for (int i = 1;i <= n;i++) {
		sum += h;
		h /= 2;
		if (i < n)sum += h;
	}
	printf("%.1f %.1f", sum, h);
	return 0;
}