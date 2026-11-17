#include<stdio.h>
int main()
{
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");

	int n,count=0;
	scanf("%d", &n);
	while (n != 0 && count < 5) {
		switch (n)
		{
		case 1:printf("price = 3.00\n");count++;break;
		case 2:printf("price = 2.50\n");count++;break;
		case 3:printf("price = 4.10\n");count++;break;
		case 4:printf("price = 10.20\n");count++;break;
		default:printf("price = 0.00\n");count++;break;
		}scanf("%d", &n);
	}return 0;
}