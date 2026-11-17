#include<stdio.h>
int main()
{
	printf("a number\n");
	int a, i, j, k;
	scanf("%d", &a);
	int cnt = 0;

	i = a;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j && i != k && j != k) {
					printf("%d%d%d", i, j, k);
					cnt++;
					if (cnt == 6) {
						printf("\n");
						cnt = 0;
					}
					else {
						printf("  ");
					}
				}k++;
			}j++;
		}i++;
	}
	return 0;
}
