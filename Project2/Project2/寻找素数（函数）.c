#include <stdio.h>

// 函数声明（因为 isPrime 定义在 main 后面）
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main(void)
{
    const int number = 100;       // 目标：找出前100个素数
    int prime[100] = { 2 };      // 定义数组并初始化，第一个素数是2
    int count = 1;                // 记录当前已经找到的素数个数（同时作为下一个存放位置的下标）
    int i = 3;                    // 从3开始找，因为2已经找过了

    // 只要还没找够100个素数，就一直循环
    while (count < number) {
        // 调用函数判断 i 是否为素数。传入：当前数字i、已知素数数组、已知素数个数
        if (isPrime(i, prime, count)) {
            prime[count++] = i;   // 如果是素数，存入数组，并且 count 加1
        }
        i++;                      // 检查下一个数字
    }

    // 打印输出结果，每行打印5个
    for (i = 0; i < number; i++) {
        printf("%d", prime[i]);
        if ((i + 1) % 5) {
            printf("\t");         // 如果不是每行的第5个，打印制表符（留空）
        }
        else {
            printf("\n");         // 如果是第5个，打印换行符
        }
    }

    return 0;
}

// 判断素数的函数
// x: 当前要判断的数字
// knownPrimes[]: 已经找到的素数数组
// numberOfKnownPrimes: 已经找到的素数个数
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret = 1; // 默认假设 x 是素数 (1表示真)
    int i;

    // 遍历已知的素数
    for (i = 0; i < numberOfKnownPrimes; i++) {
        // 如果 x 能被已知的某个素数整除
        if (x % knownPrimes[i] == 0) {
            ret = 0; // 说明 x 不是素数
            break;   // 既然已经确定不是素数了，直接跳出循环，提高效率
        }
    }

    return ret; // 返回结果（1是素数，0不是素数）
}