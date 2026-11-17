#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max, M, S;
	max = a;
	if (max < b) {
		max = b;
		if (a < c) {
			S = a;M = c;
		}
		else { S = c;M = a; }
	}if (max < c) {
		c = max;
		if (a < b) {
			S = a;M = b;
		}
		else { S = b;M = a; }


	}
	if (a == max) {
		if (c < b) {
			S = c;M = b;
		}
		else { S = b;M = c; }
	}
	if (a + b < c || a + c < b || b + c < a)
	{
		printf("不是三角形\n");
	}
	else if (a == b && b == c) {
		printf("等边三角形\n");
	}
	if (max * max == M * M + S * S && (a == b && a != c || a == c && a != b || b == c && b != a)) {
		printf("等腰直角三角形\n");
	}
	else if (max * max == M * M + S * S) {
		printf("直角三角形\n");
	}
	else if (a == b && a != c || a == c && a != b || b == c && b != a) {
		printf("等腰三角形\n");
	}
	else {
		printf("普通锐角 / 钝角三角形\n");
	}return 0;
}