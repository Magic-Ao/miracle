#include<stdio.h>
int main(void)
{
	char ch;
	int i, first = 1;
	printf("enter 8 characters\n");
	for (i = 1;i <= 8;i++) {
		ch = getchar();
		if (first == 1) {
			putchar(ch);
			first++;
		}
		else {
			putchar('-');
			putchar(ch);
		}
	}
	return 0;
}