#include<stdio.h>
#include <math.h>
int main()
{
	double s=1, x,sum=0;
	int i = 1;
	scanf("%lf", &x);
	while (fabs(s) > 0.00001) {
		sum += s;
		s = s * x / i;
		i++;

	}printf("%.4f", sum);
	return 0;
}