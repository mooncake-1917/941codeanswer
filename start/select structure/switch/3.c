#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("闰年\n");
    } else {
        printf("非闰年\n");
    }
    
    return 0;
}