#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max,M,S;
	max = a;
	if (max < b) {
		max=b;
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
	printf("%d\n", max);
	if (a != max&&a) {

	}
	return 0;
}