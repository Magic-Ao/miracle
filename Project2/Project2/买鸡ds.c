#include <stdio.h>

int main() {
    int x, y, z, n, m;
    int count = 0;

    // 读取 5 个数字（注意：输入时一定要用空格隔开）
    scanf("%d %d %d %d %d", &x, &y, &z, &n, &m);

    // 第一层循环：假设公鸡买 i 只
    for (int i = 0; i <= m; i++) {
        // 第二层循环：假设母鸡买 j 只（j 的上限受总数 m 的限制）
        for (int j = 0; j <= m - i; j++) {

            // 既然总共要买 m 只，公鸡和母鸡已经定了，小鸡数量 k 直接就能算出来
            int k = m - i - j;

            // 判断条件：
            // 1. 小鸡的数量必须能被 z 整除（即 k % z == 0）
            // 2. 公鸡花费 + 母鸡花费 + 小鸡花费 必须刚好等于 n
            if (k % z == 0 && (i * x + j * y + k / z == n)) {
                count++;
            }
        }
    }

    // 输出结果
    printf("%d\n", count);

    return 0;
}