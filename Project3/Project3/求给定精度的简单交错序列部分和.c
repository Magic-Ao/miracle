#include<stdio.h>
int main()
{
	double esp, sum=0,k=1;
	int a=1;
	scanf("%lf", &esp);
	do {
		sum += a / k;
		k += 3;
		int t = a;
		a = -t;

	} while (1.0 / k >= esp);
	printf("sum = %f", sum);
	return 0;
}