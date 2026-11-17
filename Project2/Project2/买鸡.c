#include<stdio.h>
int main()
{	
	int x, y, z, n, m;
	int count = 0;
	scanf("%d%d%d%d%d", &x, &y, &z, &n, &m);
	for (int x1 = 0;x1 <= n / x;x1++) {
		for(int y1=0;y1<=n/y;y1++){
			for (int z1 = 0;z1 <= 3*n ; z1+=3) {
				if (x1 + y1 + z1 == m && x * x1 + y * y1+ z1/3 == n) {
					count++;
				}
			}
		}
	}printf("%d\n", count);
	return 0;
}