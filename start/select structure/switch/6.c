#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    int a, b, c;  // 分别表示6元、5元、4元笔的数量
    
    // 为了买尽量多的笔，应该尽量多买4元笔
    // 我们从4元笔最多的情况开始尝试
    c = x / 4;  // 最多能买多少支4元笔
    int remain = x % 4;  // 剩余的钱
    
    // 根据余数调整方案
    while (c >= 0) {
        if (remain == 0) {
            // 刚好花光
            a = 0;
            b = 0;
            break;
        } else if (remain == 1 && c >= 1) {
            // 减少1支4元笔，多出4元，加上剩余的1元共5元，买1支5元笔
            c = c - 1;
            b = 1;
            a = 0;
            break;
        } else if (remain == 2 && c >= 1) {
            // 减少1支4元笔，多出4元，加上剩余的2元共6元，买1支6元笔
            c = c - 1;
            b = 0;
            a = 1;
            break;
        } else if (remain == 3 && c >= 2) {
            // 减少2支4元笔，多出8元，加上剩余的3元共11元，买1支5元笔和1支6元笔
            c = c - 2;
            b = 1;
            a = 1;
            break;
        }
        
        // 如果当前方案不行，减少1支4元笔，重新计算余数
        c--;
        remain += 4;
    }
    
    printf("%d %d %d\n", a, b, c);
    return 0;
}