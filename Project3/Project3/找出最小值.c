#include<stdio.h>
int main()
{
	int min, x,n;
	scanf("%d", &n);
	scanf("%d", &x);
	min = x;
	for (int i = 0;i < n-1;i++) {
		scanf("%d", &x);
		if (min > x) {
			min = x;
		}

	}printf("%d", min);
	return 0;
}