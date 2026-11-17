#include<stdio.h>
int main()
{
	int n, i,digit,blank,letter,other;
	letter = 0;
	blank = 0;
	other = 0;
	digit = 0;
	
	
	scanf("%d", &n);
	getchar();
	for (i = 0;i < n;i++) {
		char ch;
		ch=getchar();
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') letter++;
		else if (ch == ' '||ch=='\t'||ch=='\n')blank++;
		else if (ch >= '0' && ch <= '9')digit++;
		else other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}