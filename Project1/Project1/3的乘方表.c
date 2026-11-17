#include<stdio.h>
#include<math.h>

int main(void)
{
	double i, n;
	double power=1;

	printf("enter n\n");
	scanf("%lf", &n);

	for (i = 0;i <= n;i++) {
		power = pow(3, i);
		printf("(%.0f,%.0f)\n", i, power);
	}
	return 0;
}