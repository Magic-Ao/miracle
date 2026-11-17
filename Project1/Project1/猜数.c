#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100;
	int count = 0;
	int a;
	printf("I have prepared a number less than 100\n");

	do {
		printf("enter your number\n");
		scanf("%d", &a);
		count++;
		if (number > a) {
			printf("try bigger\n");
		}
		else if (number < a) {
			printf("try smaller\n");
			}
	} while (a != number);
	printf("good job,you only used %d times\n", count);

}