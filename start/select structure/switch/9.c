#include <stdio.h>

int main() {
    int weight;
    char urgent;
    scanf("%d %c", &weight, &urgent);
    
    int fee = 8;  // 基本费
    
    // 超重费计算
    if (weight > 1000) {
        int extra = weight - 1000;
        // 每500克加收4元，不足500克按500克算
        int units = extra / 500;
        if (extra % 500 != 0) {
            units++;
        }
        fee += units * 4;
    }
    
    // 加急费
    if (urgent == 'y') {
        fee += 5;
    }
    
    printf("%d\n", fee);
    return 0;
}