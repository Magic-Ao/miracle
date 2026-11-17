#include<stdio.h>
int main()
{
	int x, five, two, one,total,count=0;
	scanf("%d", & x);
	for (int i = x / 5;i >= 1;i--) {
		for (int j = x/2;j>=1;j--) {
			for (int k = 1;k <= x;k++) {
				if (5 * i + 2 * j + k == x) {
					five = i;
					two = j;
					one = k;
					total = i + j + k;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, total);
					count++;
				}
			}
		}
	}
	printf("count = %d", count);
	return 0;
}