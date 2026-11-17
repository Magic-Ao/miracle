#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x > 0) {
		printf("sign(%d) = 1", x);
	}
	if (x ==0) {
		printf("sign(%d) = 0", x);
	}
	if (x < 0) {
		printf("sign(%d) = -1", x);
	}
	return 0;
}