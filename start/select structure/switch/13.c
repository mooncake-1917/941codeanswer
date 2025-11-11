#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // 判断点是否在正方形内：x和y坐标都在[-1, 1]范围内
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}