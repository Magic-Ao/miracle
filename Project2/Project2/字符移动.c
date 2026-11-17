#include <stdio.h>
#include <string.h>

int main() {
    char str[105]; // 定义字符数组，预留一点空间给结束符 '\0'

    // 读取一整行字符串（包含空格），gets 虽然不安全但考试常考
    gets(str);

    // 遍历字符串
    for (int i = 0; str[i] != '\0'; i++) { // 遇到 '\0' 代表字符串结束
        // 如果是小写字母
        if (str[i] >= 'a' && str[i] <= 'z') {
            // 核心公式：(当前字母 - 'a' + 偏移量) % 26 + 'a'
            // 这样处理可以防止 x, y, z 移位后超出 z 的范围
            str[i] = (str[i] - 'a' + 3) % 26 + 'a';
        }
    }

    // 输出结果
    printf("%s\n", str);
    return 0;
}