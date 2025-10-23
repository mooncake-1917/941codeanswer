#include <stdio.h>
int main()
{
    int x,y,a,b;
    scanf ("%d %d",&x,&y);
    b=(y-2*x)/2;
    a=(x+y-5*b)/3;
    printf ("%d %d",a,b);
    return 0;
}