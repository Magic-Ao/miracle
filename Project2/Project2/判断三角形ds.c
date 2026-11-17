#include <stdio.h>

int main() {
    double a, b, c, temp;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("不是三角形\n");
        return 0; 
    }

   
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    if (a == b && b == c) {
        printf("等边三角形\n");
    }
    else if (a * a + b * b == c * c) {
        
        if (a == b || a == c || b == c) {
            printf("等腰直角三角形\n");
        }
        else {
            printf("直角三角形\n");
        }
    }
    else if (a == b || a == c || b == c) {
        printf("等腰三角形\n");
    }
    else {
        printf("普通锐角 / 钝角三角形\n");
    }

    return 0;
}