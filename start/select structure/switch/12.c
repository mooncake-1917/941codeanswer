#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    // 闰年判断条件：
    // 1. 能被400整除，或者
    // 2. 能被4整除但不能被100整除
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        printf("Y\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}