#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1;i <= (n + 1) / 2;i++) {
		for (int j = (n+1)/2-i;j > 0;j--) {
			printf("  ");
		}for (int k = 2 * i - 1;k > 0;k--) {
			printf("* ");
		}printf("\n");
	}
	for (int m = (n - 1) / 2;m > 0;m--) {
		for (int f = (n + 1) / 2 - m;f > 0;f--) {
			printf("  ");
		}for (int p = 2*m-1;p > 0;p--) {
			printf("* ");
		}printf("\n");
	}return 0;
}