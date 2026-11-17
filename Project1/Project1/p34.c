#include<stdio.h>
int main(void)
{
	int deno, flag, i, n;
		double item, sum;

		flag = 1;
		deno = 1;
		item = 1;
		sum = 0;
		
		printf("enter the n\n");
		scanf("%d", &n);

		for (i = 1; i <= n; i++) {
			sum = sum + item;
			flag = -flag;
			deno = deno + 2;
			item = flag * 1.0 / deno;
		}
		printf("sum=%f\n",sum);

		return 0;
}