#include <stdio.h>
int main() 
{
    int cows1 = 15;
    int days1 = 20;
    int cows2 = 20;
    int days2 = 10;
    int total1 = cows1 * days1;
    int total2 = cows2 * days2; 
    // 解方程组：G + 20R = 300, G + 10R = 200
    // 两式相减得到：10R = 100 => R = 10
    int R = (total1 - total2) / (days1 - days2);
    printf("%d",R);
    return 0;
}