#include<stdio.h>
int main()
{
	int n,x, suma, sumb;
	scanf("%d", &n);
	suma = 0;
	sumb = 0;
	for (int i = 0;i < n;i++) {
		scanf("%d", &x);
		if (sumb >= suma) {
			suma += x;
			printf("A");
		}
		else {
			sumb += x;
			printf("B");
		}
	}return 0;
}