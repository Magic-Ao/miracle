#include<stdio.h>
int main()
{
	int m, n,k;
	scanf("%d%d", &m, &n);
	if (m > n) {
		int t = n;
		n = m;
		m = t;
	}
	k = n;
	for (int i = 2 / 2 + 1;i >= 1;i--) {
		if (m % i == 0 && n % i == 0) {
			printf("%d", i);break;
		}
	}
	while (1) {
		if (k % n == 0 && k % m == 0) {
			printf(" %d", k);
			break;
		}k++;
	}return 0;
}