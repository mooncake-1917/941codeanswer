#include <stdio.h>

void max(int a, int b, int c);

int main() {
    int a;
    int b;
    int c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }
    max(a, b, c);
    return 0;
}
void max(int a, int b, int c) 
{
    /* 简单且可读的三数降序打印：找到最大、中间和最小值，然后打印 */
    int max = a;
    int mid;
    int min = a;
    /* 计算最大值 */
    if (b > max) max = b;
    if (c > max) max = c;
    /* 计算最小值 */
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    /* 中间值通过总和减去最大和最小得到（适用于整数） */
    mid = a + b + c - max - min;
    printf("%d %d %d\n", max, mid, min);
}