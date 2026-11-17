#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	printf("enter 4 numbers:\n");
	
	for (i = 1;i <= 4;i++) {
		ch = getchar();
		printf("%c\n",ch);
	}
	return 0;
}