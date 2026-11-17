#include<stdio.h>
#include<math.h>

int main(void)
{
	double x, y;

	printf("Enter x\n");
	scanf("%lf", &x);

	if (x < 0) {
		y = pow(x + 1, 2) + x + x + 1 / x;
	}else {
		y = sqrt(x);
	}
	printf("y=%.2lf\n", y);
	return 0;
}