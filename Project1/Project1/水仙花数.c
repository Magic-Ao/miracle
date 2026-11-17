#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int first = 1;
	int i;
	for (i = 1;i < n;i++) {
		first = first * 10;
	}
	//printf("%d\n", first);
	int k;
	for (k = first;k < first * 10;k++) 
	{
		int sum = 0;
		int t = k;
		do {
			int digit,K;
			digit = t% 10;
			t = t / 10;
			K = pow(digit, n);
			sum = sum + K;
		} while (t> 0);
		if (sum == k) {
			printf("%d\n", k);
		}
	}return 0;

}