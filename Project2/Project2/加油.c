#include<stdio.h>
double f(int a, double k, double h);
int main()
{
	int a, b;
	double k,sum,h;
	char ch;
	scanf("%d%d %c", &a, &b, &ch);
	if (b == 90)k = 6.95;
	if (b == 93)k = 7.44;
	if (b == 97)k = 7.93;
	if (ch == 'm')h = 0.95;
	if (ch == 'e')h = 0.97;
	sum = f(a, k, h);
	printf("%.2f\n", sum);
	return 0;
}
double f(int a, double k, double h)
{
	double total;
	total= a * k * h;
	return total;
}