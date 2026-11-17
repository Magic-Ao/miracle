#include<stdio.h>
int main()
{
	int n;
	char k = 'A';
	scanf("%d", &n);
	for (int i = n;i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			if (j != i)
				printf("%c ", k);
			else printf("%c", k);
			k ++ ;
		}
		printf("\n");
	}return 0;
}