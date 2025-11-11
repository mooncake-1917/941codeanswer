#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // 三角形判定条件：任意两边之和大于第三边
    if (a + b > c && a + c > b && b + c > a) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}