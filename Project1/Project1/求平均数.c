#include<stdio.h>
int main()
{
	int score, count=0;
	double sum=0, average;
	do {
		printf("enter the score\n");
		scanf("%d", &score);
		if (score != -1) 
		{
			count++;
			sum = sum + score;
		}
	} while (score != -1);
	average = 1.0 * sum / count;
	printf("the average scores of the class is %f", average);
	return 0;

}