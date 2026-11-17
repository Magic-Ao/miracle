#include<stdio.h>
#include<math.h>
int main()
{
	double money, rate, year, interest,k;
	scanf("%lf %lf %lf", &money, &year, &rate);
	k = pow(1.0 + rate, year);
	interest = money * k - money;
	printf("interest=%.2f", interest);
	return 0;

}