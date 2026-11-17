#include<stdio.h>
int main()
{
	int n, m, k,count=0;
	int a[1005] = { 0 };
	scanf("%d%d", &n, &m);
	for (int i = 0;i < m;i++) {
		scanf("%d",&k);
		a[k] = 1;
	}
	for (int h = 0;h < n;h++) {
		if (a[h] == 1) {
			count++;
		}
	}if (count == n) {
		printf("%d", n);
	}
	else {
		for (int h = 0;h < n;h++) {
			if (a[h] == 0) {
				printf("%-2d", h);
			}
		}

	}return 0;
}