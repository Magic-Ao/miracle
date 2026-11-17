#include<stdio.h>
#include<math.h>
int main()
{
	double x, k,sum=1;
	double s=0;
	int i = 1,j=1;
	scanf("%lf", &x);
	do {
		sum += s;
		k *=x;
		j = j * i;
		s = k / j;
		i++;

	} while (fabs(s) > 0.00001);
	printf("%.4f", sum);
	return 0;

}