#include<stdio.h>
int main()
{
	int a[1000] = { 0 };
	int n;
	for (int i = 1;i <= 10;i++) {
		scanf("%d", &n);
		a[n] = n;
	}
	printf("{");
	int flag = 1;
	for (int j = 1;j <= 5;j++) {
		if (a[j] != 0&&flag==1) {
			printf("%d", a[j]);flag = 0;
		}
		else if (a[j] != 0) {
			printf(",%d", a[j]);
		}
		printf("}");
	}return 0;
}