#include<stdio.h>
int main()
{
	int x1, x2, x3, y1, y2, y3;
	scanf("%d%d%d", &x1, &x2, &x3);
	scanf("%d%d%d", &y1, &y2, &y3);
	if (x1* y1 + x2 * y2 + x3 * y3 == 0) {
		printf("Orthogonal\n");
	}
	else {
		printf("Non-Orthogonal\n");
	}
	return 0;
}