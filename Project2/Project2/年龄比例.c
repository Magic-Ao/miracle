#include<stdio.h>
int main()
{
	int n, a = 0, b = 0, c = 0, d = 0;
	scanf("%d", &n);
	for (int i = 1;i <= n ;i++) {
		int age;
		scanf("%d", &age);
		if (age <= 18) {
			a = a++;
		}
		else if(age>18&&age<=35){
			b = b++;
		}
		else if (age > 35 && age <= 60) {
			c = c++;
		}
		else if (age > 60) {
			d = d++;
		}
	}
	double a1, b1, c1, d1;
	a1 = 100.0 * a / n;
	b1 = 100.0 * b / n;
	c1 = 100.0 * c / n;
	d1 = 100.0 * d / n;
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n", a1, b1, c1, d1);
	return 0;
}