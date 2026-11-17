#include<stdio.h>
int main()
{
	int x, n, k, count = 0;
	scanf("%d%d", &x, &n);
	scanf("%d", &k);
	if (k <= 0) {
		printf("Game Over\n");
		return 0;
	}
	if (x == k) {
		printf("Bingo!\n");
		return 0;
	}if (x > k) {
		printf("Too small\n");
		count++;
	}if (x < k) {
		printf("Too big\n");
		count++;
	}for (int i = 2;i < n;i++) {
		scanf("%d", &k);
		if (k <= 0) {
			printf("Game Over\n");
			return 0;
		}
		if (x == k) {
			if (count >= 3)
				printf("Good Guess!\n");
			else printf("Lucky You!");
			return 0;
		}if (x > k) {
			printf("Too small\n");
			count++;
		}if (x < k) {
			printf("Too big\n");
			count++;
		}
	}scanf("%d", &k);
	if (x == k) {
		printf("Good Guess!\n");
	}
	else { printf("Game Over"); }
	return 0;
}