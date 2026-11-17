#include <stdio.h>

int main() {
    // 查表法：索引0不用，1~4对应各项价格
    int prices[5] = { 0, 5, 10, 15, 20 };
    int total = 0;
    int choice;

    while (1) { // 无限循环
        scanf("%d", &choice);

        if (choice == 0) {
            break; // 输入0跳出循环
        }
        else if (choice >= 1 && choice <= 4) {
            total += prices[choice]; // 累加对应价格
            printf("当前累计：%d 元\n", total);
        }
        else {
            printf("指令错误，请重新输入\n");
        }
    }

    printf("洗浴结束，总计：%d 元\n", total);
    return 0;
}