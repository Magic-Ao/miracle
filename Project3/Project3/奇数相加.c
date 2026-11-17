#include<stdio.h>
int main()
{
	int sum=0;
	while (1) {
		int x;
		scanf("%d", &x);
		if (x <= 0)break;
		if (x % 2 != 0) {
			sum += x;
		}
	}printf("%d\n", sum);
	return 0;
}