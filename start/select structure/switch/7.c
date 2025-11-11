#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    
    // 晶晶每周1、3、5有课（对应数字1、3、5）
    if (day == 1 || day == 3 || day == 5) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    
    return 0;
}