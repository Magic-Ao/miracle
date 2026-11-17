#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			if (j == i)
			{
				printf("%dx%d=%2d\n",j,i,i*j);
			}
			else {
				printf("%dx%d=%2d ",j,i,i*j);
			}
		}
	}return 0;
}