#include <stdio.h>

int main() {
    int x, n, k;
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);

        if (k <= 0) {
            printf("Game Over\n");
            return 0;
        }

        if (k == x) {
            if (i == 1) {
                printf("Bingo!\n");
            }
            else if (i <= 3) {
                printf("Lucky You!\n");
            }
            else {
                printf("Good Guess!\n");
            }
            return 0;
        }
        else if (k < x) {
            printf("Too small\n");
        }
        else {
            printf("Too big\n");
        }
    }

    printf("Game Over\n");

    return 0;
}