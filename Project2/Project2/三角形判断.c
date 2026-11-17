#include<stdio.h>
#include<math.h>
int main()
{
	double x1, x2, x3, y1, y2, y3;
	double S, L,s1,s2,s3,s,t;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	s1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	s2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	s3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	
	if (s1 > s2) { t = s1;s1 = s2;s2 = t; }
	if (s1 > s3) { t = s1;s1 = s3;s3 = t; }
	if (s2 > s3) { t = s2;s2 = s3;s3 = t; }

	if (s1 + s2 <= s3) {
		printf("Impossible\n");
		return 0;
	}
	else {

		s = (s1 + s2 + s3) / 2.0;
		L = s1 + s2 + s3;
		S = sqrt(s * (s - s1) * (s - s2) * (s - s3));
		printf("L = %.2f, A = %.2f", L, S);
	}return 0;

}