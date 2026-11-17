#include<stdio.h>
int main()
{
	int  x,count=0;
	scanf("%d", &x);
	int a[200];
	a[count] = x;
	count++;
	while (x != 1)
	{
		if (x % 2 == 0) {
			x = x / 2;
		}
		else {
			x = x * 3 + 1;
		}
		a[count] = x;
		count++;
	}
	for (int t = count-1;t >= 0;t--) {
		printf("%d ", a[t]);
	}
	return 0;
}