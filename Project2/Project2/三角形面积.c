#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,t;
	double	s, S, C;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) { t = a;a = b;b = t; }
	if (a > c) { t = a;a = c;c = t; }
	if (b > c) { t = b;b = c;c = t; }

	if (a + b > c) {
		s = 1.0 * (a + b + c) / 2;
		S = sqrt(s * (s - a) * (s - b) * (s - c));
		C = (a + b + c)*1.0;
		printf("area = %.2f; perimeter = %.2f", S, C);
	}
	else { printf("These sides do not correspond to a valid triangle"); }
	return 0;
}