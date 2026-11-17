#include<stdio.h>
int main()
{
	int n, y,y0,y2,y3,y4,y1,count=1;
	scanf("%d %d", &y0, &n);
	for (y = y0; y <= 3000&&y>0; y++)
	{
		y4 = y % 10;
		y /= 10;
		y3 = y % 10;
		y /= 10;
		y2 = y % 10;
		y /= 10;
		y1 = y % 10;
		//printf("%d%d%d%d", y1, y2, y3, y4);
		int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
		int b[10] = { 0 };
		//printf("%d", a[2]);
		for (int i = 0;i < 10;i++) {
			if (y1 = a[i]) {
				b[i]++;
			}
		}
		for (int f = 0;f < 10;f++) {
			if (y2 = a[f]) {
				b[f]++;
			}
		}
		for (int w = 0;w < 10;w++) {
			if (y3 = a[w]) {
				b[w]++;
			}
		}
		for (int l = 0;l < 10;l++) {
			if (y4= a[l]) {
				b[l]++;
			}
		}
				//printf("%d",b[1]);
		int max = b[0];
		
		}if (max = n)printf("%d %d", y - y0, y);
		break;

	}
		
}