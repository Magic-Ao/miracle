#include<stdio.h>
int main()
{
	int v, r;
	double o;
	scanf("%d%d", &v, &r);
	o = (1.0 * v / r) * 100 - 100;
	if (o < 10) {
		printf("OK\n");
	}
	if (o >= 10&&o<50) {
		printf("Exceed %.f%%. Ticket 200\n", o);
	}
	else if (o > 50) {
		printf("Exceed %.f%%. License Revoked\n", o);
	}return 0;
}