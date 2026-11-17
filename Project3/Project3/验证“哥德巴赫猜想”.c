#include<stdio.h>
int main()
{
	double x;
	int a;
	int flag,k=1;
	scanf("%lf", &x);
	for (int i = 2;i <= x / 2;i++) {
		flag = 1;

		for (int j = 2;j * j <= i;j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}

		}if (flag == 1) {
			a = x - i;
			int k = 1;
			for (int j = 2;j * j <= a;j++) {

				if (a % j == 0) {
					k = 0;
					break;
				}
			}
			if (k == 1) {
				printf("%.0f = %d + %d", x, i, a);
				return 0;
			}
		}
	}
}