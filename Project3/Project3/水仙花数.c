#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	int a, b,digit,sum,t;
	scanf("%d", &x);
	a = pow(10, x-1);
	b = 10 * a;
	for (int i = a;i < b;i++) {
		sum = 0;t = i;
		while(t!=0){
			digit = t % 10;
			sum += pow(digit, x);
			t /= 10;
		}if (sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}