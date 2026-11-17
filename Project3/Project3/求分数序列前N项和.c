#include<stdio.h>
int main()
{
	int n;
	double sum=2.0, a=2.0,b=1.0,k;
	scanf("%d", &n);
	for (int i = 1;i < n;i++) {
		double t = a;
		a += b;
		b = t;
		k = a / b;
		//printf("%f", k);
		sum += k;
		
	}
	printf("%.2f", sum);
	return 0;
}