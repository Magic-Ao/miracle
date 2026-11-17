#include<stdio.h>
#include<math.h>
int main()
{ 
	int n, i, sum;
	
	printf("Enter n>0\n");
	scanf("%d", &n);
	sum = 0;
	for (i = 1;i <= n; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);

	return 0;
}