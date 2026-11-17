#include<stdio.h>
int main()
{
	int k=0,n=2,i,digit=1;
	while (k < 50)
	{
		for (i = 2;i < n;i++) {
			digit = n % i;
			if (digit == 0) {
				n++;
				break;
			}
		}if (digit != 0) {
			printf("%d\n", n);
			k++;
			n++;
		}
	}return 0;
}

