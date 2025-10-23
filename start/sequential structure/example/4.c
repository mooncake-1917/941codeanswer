#include <stdio.h>

int main() 
{
    int x,y ,n,m,d;
    scanf("%d %d %d", &x, &y, &n);
    if (x<-100) x=-100;
    if (y>100) y=100;
    if (n<=0) n=1;
    d= y - x;
    m=x+d*(n-1);
    printf("%d", m);
    return 0;
}