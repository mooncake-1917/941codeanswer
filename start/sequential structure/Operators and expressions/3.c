#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    if (x>100) x=100;
    if (y>100) y=100;
    int sum = x*87 + y*85;
    int avg = sum / (x+y);
    printf("%d",avg);
    return 0;
}