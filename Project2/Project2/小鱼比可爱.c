#include<stdio.h>
int main()
{
	int n,x;
	int a[105];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int count = 0;
		scanf("%d", &x);
		a[i] = x;
		for (int t = 0;t <= i;t++) {
			if (a[t] < a[i]) {
				count++;
			}

		}printf("%d ", count);

	}return 0;
}