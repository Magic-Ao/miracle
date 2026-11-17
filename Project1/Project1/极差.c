#include<stdio.h>
int main()
{
	int a[105], n;
	scanf("%d", &n);
	int min = 1000, max = 0;
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}printf("%d", max - min);
	return 0;
	
}