#include <stdio.h>
#include <string.h>

char str[100005];
char box[100005];

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        scanf("%s", str);

        int count = 0;
        int isRight = 1;
        int len = strlen(str);

        for (int i = 0; i < len; i++) {
            if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
                box[count] = str[i];
                count++;
            }
            else {
                if (count == 0) {
                    isRight = 0;
                    break;
                }

                if (str[i] == ')' && box[count - 1] == '(') {
                    count--;
                }
                else if (str[i] == ']' && box[count - 1] == '[') {
                    count--;
                }
                else if (str[i] == '}' && box[count - 1] == '{') {
                    count--;
                }
                else {
                    isRight = 0;
                    break;
                }
            }
        }

        if (isRight == 1 && count == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
