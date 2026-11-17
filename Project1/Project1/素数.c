#include<stdio.h>
int main()
{
	int i,x,k,p;
	p = 0;
	printf("enter the number\n");
	scanf("%d", &x);
	for (i = 2;i < x;i++) {
		k = x % i;
		if (k == 0) {
			p = ++p;
			break;
		}
	}
	if (p ==0) {
		printf("this is sushu\n");
	}
	else{
		printf("this is not sushu\n");
	}
	return 0;

}

