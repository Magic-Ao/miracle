#include<stdio.h>
int main()
{
	int m, n,x;
	int a[1000];
	int b[1000];
	scanf("%d%d", &n, &m);
	for (int i = 1;i <= n;i++) {
		scanf("%d", &x);
		a[i] = x;
	}
	for (int j = m+1,i=1;j <= n;j++,i++) {
		b[i] = a[j];

	}for (int k = n - m + 1, i = 1;k <= n;k++, i++) {
		b[k] = a[i];
	}
	for (int i = 1;i < n;i++) {
		printf("%d,", b[i]);
	}
	printf("%d", b[n]);
	return 0;
}