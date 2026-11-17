#include<stdio.h>
int main()
{
	int  t,result;
	double s,p;
	scanf("%lf%d", &s, &t);
	if (s <= 3) {
		p = 10 + (t / 5) * 2;
		result = (int)(p + 0.5);
	}
	else if (s > 3 && s <= 10) {
		p = 10 + (s - 3) * 2 + (t / 5) * 2;
		result = (int)(p + 0.5);
	}
	else if (s > 10) {
		p = 10 + 7 * 2 +(s-10)*3+ (t / 5) * 2;
		result = (int)(p + 0.5);
	}
	printf("%d", result);
	return 0;
}