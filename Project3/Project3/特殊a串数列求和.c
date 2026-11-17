#include<stdio.h>
#include<math.h>
int main()
{
	int a, m, sum = 0;
	int b[100];
	b[0] = 0;
	scanf("%d%d", &a, &m);
	for (int i = 1;i <= m;i++) {
		b[i] = b[i - 1] + a * pow(10, i - 1);
	}
	for (int t = 1;t <= m;t++) {
		sum += b[t];
	}printf("s = %d", sum);
	return 0;

}