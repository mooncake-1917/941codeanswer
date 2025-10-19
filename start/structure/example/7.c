#include <stdio.h>

int main() 
{
    int a, b, c ;
    double v;
    scanf("%d %d", &a, &b);
    v=b*b*3.14*a;
    c=20000/v;
    if ((20000%(int)v)!=0) c=c+1;
    printf("%d", c);
    return 0;
}