#include<stdio.h>
int main()
{
	int n, g;
	int A, B, C, D, E;
	A = B = C = D = E = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &g);
		if (g >= 90) {
			A++;
		}
		else if (g >= 80) {
			B++;
		}
		else if (g >= 70) {
			C++;
		}
		else if (g >= 60) {
			D++;
		}
		else if (g < 90) {
			E++;
		}
	}printf("%d %d %d %d %d\n", A, B, C, D, E);
	return 0;
}