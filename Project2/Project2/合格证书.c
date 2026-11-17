#include<stdio.h>
int main()
{
	int n, A=0, B=0, C=0,k;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &k);
		if (k >= 85) {
			A++;
		}
		else if (k >= 60) {
			B++;
		}
		else {
			C++;
		}
	}printf("%d %d %d", A, B, C);
	return 0;
}