#include<stdio.h>
double fact(int n);
int main(void)
{
	int m, n;
	double result;

	printf("please print two N*\n");
	scanf("%d %d", &m, &n);

	if (m > n || m <= 0 || n <= 0) {
		printf("you choose the wrong number");
		return 1;
	}
	result = fact(n) / (fact(m) * fact(n - m));
	printf("%.0lf\n", result);

	return 0;
}
double fact(int n)
{
	int i = 1;
	double product=1.0;
	
	for (i = 1; i <= n; i++) {
		product = i * product;
	}
	return product;

}