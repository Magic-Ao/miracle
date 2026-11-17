#include<stdio.h>
int main()
{
	int a, b, c, ret = 0;
	scanf("%d,%d,%d", &a, &b, &c);

	if (a <= 0 || b > 12 || c > 31 || b < 1 || c < 1) {
		printf("不合法\n");
		return 0;
	}

	if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0) {
		ret = 1;
	}
	else {
		ret = 0;
	}

	if (ret == 0) {
		if (b == 2) {
			if (c <= 28) { printf("合法\n"); }
			else { printf("不合法\n"); }
		}
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
			if (c <= 31) { printf("合法\n"); }
			else { printf("不合法\n"); }
		}
		else {
			if (c <= 30) { printf("合法\n"); }
			else { printf("不合法\n"); }
		}
	}

	else if (ret == 1) { 
		if (b == 2) {
			if (c <= 29) { printf("合法\n"); }
			else { printf("不合法\n"); }
		}
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
			if (c <= 31) { printf("合法\n"); }
			else  printf("不合法\n");
		}
		else { // 剩下就是小月
			if (c <= 30) { printf("合法\n"); }
			else { printf("不合法\n"); }
		}
	}

	return 0;
}