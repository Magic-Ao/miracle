#include<stdio.h>
int main()
{
	int x;
	int one, two, five;

	scanf("%d", &x);
	for (one = 1;one < x*10;one++) {
		for (two = 1;two < x * 5;two++) {
			for (five = 1;five < x * 2;five++); {
				if (x * 10 ==one + two * 2 + five * 5) {
					printf("one %d,two %d,five %d\n", one, two, five);
					goto out;
				}
			}
		}
	}out:
	return 0;
}