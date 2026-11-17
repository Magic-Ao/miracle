#include<stdio.h>
int main()
{
	int m, n,ret=0,sum=0,x=0;
	scanf("%d%d", &m, &n);
	int i;
	for (i = m;i <= n;i++) {
		if (i <= 1)continue;
		ret = 1;
		for (int t = 2;t * t <= i;t++) {
			if (i % t == 0) {
				ret = 0;
				break;
			}
		}if (ret == 1) {
			x++;
			sum += i;
		}
		
	}printf("%d %d",x, sum);
	return 0;
}