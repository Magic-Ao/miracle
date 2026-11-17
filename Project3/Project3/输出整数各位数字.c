#include<stdio.h>
int main()
{
	int  i = 0;
	char ch, a[100];
	do {
		ch = getchar();
		a[i] = ch;
		i++;

	} while (ch != '\n');
	for (int k = 0;k <=i-2 ;k++) {
		printf("%c ", a[k]);
	}return 0;
}