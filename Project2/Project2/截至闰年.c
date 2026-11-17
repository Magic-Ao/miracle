#include<stdio.h>
int main()
{
	int i, n,count=0;
	scanf("%d", &n);
	if (n < 2000 || n>2099) {
		printf("Invalid year!\n");
		return 0;
	}
	for (i = 2001;i <= n;i++) {
		if (i % 4 == 0 && i % 100 != 0) {
			printf("%d\n", i);
			count++;
		}
		else if (i % 400 == 0) {
			printf("%d\n", i);
			count++;
		}
	}if (count == 0) {
		printf("None\n");
	}return 0;
}