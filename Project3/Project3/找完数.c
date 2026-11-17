#include<stdio.h>
int main()
{
	int m,n,sum=0,count=0;
	scanf("%d%d", &m,&n);
	for (int i = m;i <= n;i++) {
		sum = 0;
		for (int j = 1;j <=(i / 2 + 1);j++) {
			if (i % j == 0) {
				sum += j;
			}
		}if (sum == i)
		{
			count++;
			printf("%d = ",i);
			for (int j = 1;j < (i / 2 + 1);j++)
			{
				if (i % j == 0 && j != i / 2) {
					printf("%d + ", j);
				}if (i % j == 0&&j == i / 2) {
					printf("%d\n", j);
				}
			}
		}
	}if (count == 0) {
		printf("None");
		return 0;
	}
}