#include<math.h>
#include<stdio.h>
int main(void)
{
	int day;
	double result, initial, factor;

	printf("Enter initial,factor,day\n");
	scanf("%lf%lf%d", &initial, &factor, &day);

	result = initial * pow(1 + factor, day);
	printf("result=%.2lf\n", result);

	return 0;
}